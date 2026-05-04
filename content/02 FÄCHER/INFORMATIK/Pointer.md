---
publish: true
tags: []
aliases: []
---

Ein Pointer ist ein Datentyp, der direkten Speicherzugriff erlaubt.

# Syntax

```c title="in main:"
int var = 42;
int *pointer = &var;
printf("%d\n", var);
printf("%p\n", pointer);
```

*Im Speicher (Beispiel):*

| Adresse | Wert           |
| ------- | -------------- |
| 0x02    | 42             |
| 0x08    | 0x02 (Adresse) |

```txt title="Output (falls Speicher wie oben):"
42
0x02
```

> [!NOTE] In der Realität sind die vom Betriebssystem zugewiesenen Speicheradressen meistens VIEL größer

# Verwendung

## Warum?

### Dynamische Allokierung

In C können Datentypen nicht dynamisch ihre Größe verändern. Das heißt, structs und ints (*auch Pointer*) etc. haben immer eine feste, beim Compilen zugewiesene Größe. Das bedeutet, ein Array von Länge 5 kann man nicht auf Länge 6 erweitern. Die Lösung hierbei ist die [[#Allokierung]] von Speicher. Es erlaubt die direkte Manipulation von Heap-Speicher, aber man kann sich da einfach ins Knie schießen. Oft vorkommende Fehler sind [[#Fehler|unten aufgelistet]].

### "returns"

Eine Funktion kann mehrere Werte zurückgeben, indem man die Argumente als Pointer übergibt (`pass-by-reference`):

```c
// return: der Statuscode der Operation
// a wird modifiziert und durch das Ergebnis ersetzt
int divide{int *a, int *b} {
	if(*b == 0) {
		// divided by zero
		return 1;
	}

	*a = *a / *b;
	return 0;
}
```

### Speicheroptimierung

TLDR: Bei großen `structs` `pointer` bevorzugen. Nerdige aber unnötige Erklärung folgt ([[#Zugriff|SKIP]]).

Ein Pointer auf ein Element ist immer gleich groß (standardmäßig 32 oder 64 Bits). Da `struct`'s kopiert werden, kann ein `pointer` effizienter sein.

```c
typedef struct MyGiantStruct {
	long long int l1;
	long long int l2;
	long long int l3;
	// …
	long long int l10000;
};

// langsam
void my_func_no_p(MyGiantStruct s) {
	// …
}

// schnell
void my_func_p(MyGiantStruct *s) {
	// …
}
```

Je nach Programm und `struct`-Typ als auch CPU-Architektur kann die Performance hier unterschiedlich sein. Generell ist es ab einem `struct`'s mit zwei `int`'s/`float`'s oder einem `long int` oder `double` ein Mehrwert.

Als Benchmark habe ich [[pointer_no_pointer.c]] verwendet.

```bash title="Output"
> time pass_by_val.out
real    0m0,165s
user    0m0,159s
sys     0m0,006s
> time pass_by_ref.out
real    0m0,143s
user    0m0,138s
sys     0m0,005s
```

## Zugriff

```c title="in main:"
int var = 42;

// int ist hier wichtig; es bestimmt, wie weit bei Zugriffen in Bytes gesprungen wird!
int *pointer = &var;

// Beide Zeilen machen exakt das gleiche
int var_two = *pointer;
int var_two = pointer[0];

// Beide Zeilen machen exakt das gleiche
int var_three = *(pointer + 1);
int var_three = pointer[1];
```

## Allokierung

```c 
// die Anzahl an ints, die man speichern will
int length = 5;

// reserviert Speicherplatz für 5 (length) Integers
int *p = malloc(sizeof(int) * length);

// befreit den Speicher wieder
free(p);
```

> [!NOTE] `free` nur nach `malloc` oder `calloc`!
> Wenn ein Pointer auf ein statisches (nicht dynamisches) Objekt erstellt wird, kümmert sich C selbst um den Speicher!
> ```c title="falsches free" {3}
> int x = 42;
> int *p = &x;
// Fehler hier!
> free(p);
> ```

# Fehler

## Memory Leaks

Ein Memory Leak entsteht, wenn `free` nicht auf reservierten Speicher aufgerufen wird.

```c
int *p = malloc(sizeof(int) * 5);

// …

// kein free
```

Der Speicher bleibt auch nach Ende des Programms reserviert. Daten liegen so offen im Speicher und können nicht befreit werden, was eventuell den gesamten Speicher über genügend Zeit auffüllen kann und das System so zum Absturz bringt.

## Segmentation Fault (`segfault`)

Ein `segfault` kommt vor, wenn auf eine Speicheradresse zugegriffen wird, die dem Programm *nicht* zugewiesen wurde.

```c title="in main:" {3}
// Allokiere 2 ints
int* p = malloc(2*sizeof(int));
printf("%d", p[10000000000000000]);
```

```txt title="Output (gcc)"
Segmentation fault (core dumped)
```

## Use after free (`UAF`)

Ein `UAF` ist die Verwendung von Speicher nach einem Free-Befehl. Es stürzt nicht zwingend das Programm ab, kann aber zufällige Werte aus anderem Speicher o.Ä. auslesen.

```c title="in main:" {4,10}
// Allokiere 2 ints, setze den ersten auf 42 und freee sie danach
int* p = malloc(2*sizeof(int));
p[0] = 42;
free(p);

// Lasse etwas Code laufen, damit das Betriebssystem den Speicher fuer etwas anderes verwendet
// … //

// Ausgabe
printf("%d", p[0]);
```

```bash title="Output (gcc)" {1}
6    // zufällige Zahl
```
