---
publish: true
tags: []
aliases: []
---

# Erklärung

Wenn man ein Programm aufruft, kann man oft Befehlszeilenargumente übergeben.

```powershell title="Windows"
cp my_file.txt my_copied_file.txt   # kopiert eine Datei
dir /?                              # zeigt eine Hilfenachricht zu dir
```

```bash title="Linux (bash) / Mac?"
cp my_file.txt my_copied_file.txt     # kopiert eine Datei
ls --help                             # zeigt eine Hilfenachricht zu dir
```

# Verwendung

Man kann optional der `main`-Methode Befehlszeilenargumente hinzufügen.

```c
int main(int argc, char *argv[]);
```

Dabei ist `argc` die Anzahl der Befehlszeilenargumente, während `argv` ein [[Pointer]] die Befehlszeilenargumente selbst als String ist.

Man kann dementsprechend auf einzelne Argumente so zugreifen:

```c title="in main"
char arg1[] = argv[1];
```

> [!NOTE] `argv[0]` ist der Name der ausführbaren Datei selbst (oft `a.out`).

# Beispiele

## Display aller Argumente

```c title="main.c"
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("ARGC: %d\n", argc);
	
	for(int i = 0; i < argc; i++) {
		printf("%d: %s\n", i, argv[i]);
	}
}
```

```bash title="Output"
> my_program those are the arguments
ARGC: 5
0: ./a.out    # arg[0] kann varieeren
1: those
2: are
3: the
4: arguments
```

## Help-Message

```c title="show_help.h"
#pragma once
void print_help();
```

```c show_help.c
#include <stdio.h>
#include "show_help.h"

void print_help() {
	printf("HELP FOR COMMAND:\n");
	printf("This is a very useful command\n");
	printf("OPTIONS:\n");
	printf("    --help    show this help message\n");
}
```

```c title="main.c"
#include <stdio.h>
#include <string.h>
#include "show_help.h"

int main(int argc, char *argv[]) {
	for(int i = 0; i < argc; i++) {
		int is_help = !strcmp(argv[i], "--help"); // strcmp gibt 0 bei gleichen strings zurueck
		
		if(is_help) {
		    print_help();
		    return 0;
		}
	}
	
	// Rest vom Code…
	printf("42\n");
	return 0;
}

```

```bash title="Output"
> my_command
42
> my_command some_arg
42
> my_command some_things --help some_more_things
HELP FOR COMMAND:
This is a very useful command
OPTIONS:
	--help    show this help message
```

# Quellen

[Vorlesungsfolien, Seite 246-252](https://elearning.dhbw-ravensburg.de/pluginfile.php/426404/mod_resource/content/2/Informatik_1%2B2_C_2026-01-09.pdf#page=243)
