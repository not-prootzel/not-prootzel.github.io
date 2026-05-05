---
publish: true
tags: [analysis, integral]
aliases: []
---

# Gebrochenrationale Funktionen

Eine gebrochenrationale Funktion $f(x)$ hat die Form

$$
	f(x)=\frac{Z(x)}{N(x)}
$$

wobei $Z(x)$ und $N(x)$ ein Polynom $m$-ten bzw. $n$-ten Grades sind.

Eine Funktion $f(x)$ ist **echt gebrochenrational**, wenn $n>m$ (Nennergrad größer als Zählergrad).

# Partialbruchzerlegung

Bei der Partialbruchzerlegung geht es darum Integrale der Form

$$
	\int f(x)dx=\int \frac{Z(x)}{N(x)}dx
$$

zu berechnen.

Als Beispiel wird die folgende Funktion betrachtet:

$$
	\int f(x) = \int \frac{{x^3-5x^2+x+4}}{x^2-7x+10}
$$

Dazu werden folgende Schritte angewandt:

1. **Umwandeln in eine echt gebrochenrationale Funktion**

   Falls $f(x)$ eine **unecht** gebrochenrationale Funktion ist, muss man diese durch Polynomdivision erst in eine echt gebrochenrationale Funktion umwandeln.

   ![[02 FÄCHER/MATHEMATIK/II/attachments/09 Integration mithilfe der Partialbruchzerlegung/file-20260504081355608.png]]

   Damit wissen wir:

   $$
	\int f(x)dx=\int x+2+\frac{{5x-16}}{x^2-7x+10}dx
   $$

2. **Herausfinden der Nullstellen des Nenners**

   Als nächstes muss man die Nullstellen des Nenners herausfinden. Hier kann man das Verfahren frei wählen. Das Hornerschema, die p-q-Formel oder das Anwenden der binomischen Formel eignen sich gut

   $$
	-\frac{p}{2}\pm \sqrt{ \frac{p^2}{4}-q }=-\frac{-7}{2}\pm \sqrt{ \frac{(-7)^2}{4}-10 }=\frac{7}{2}\pm \sqrt{ \frac{9}{4} }=\frac{7}{2}\pm \frac{3}{2}
   $$
   $$
	\implies x_{1}=2;x_{2}=5
   $$

3. **Bestimmung der Koeffizienten $A_{i}$**

   Mit den Nullstellen lässt sich die folgende Gleichung aufstellen:

   $$
	f_{echt}(x)=\frac{A_{0}}{x-x_{0}}+\frac{A_{1}}{x-x_{1}}+\dots+\frac{A_{k}}{x-x_{k}}=\sum_{i=1}^k \frac{A_{i}}{x-x_{i}}
   $$

   wobei $k$ die Anzahl der Nullstellen aus 2. ist.

   $$
	\frac{5x-16}{x^2-7x-10}=\frac{A}{x-2}+\frac{B}{x-5}
   $$

   Das Gleichungssystem lässt sich dann auf zwei Varianten lösen:

	 1. **Koeffizientenvergleich**

		Man formt die linke Seite mit den Koeffizienten auf den gleichen Nenner um und vergleicht die Koeffizienten.

		$$
			\frac{\textcolor{orange}{5x}-\textcolor{cyan}{16}}{x^2-7x-10}=\dots=\frac{{\textcolor{orange}{(A+B)x}+\textcolor{cyan}{(-5A-2B)}}}{x^2-7x-10}
		$$
		$$
			\textcolor{orange}{5x}-\textcolor{cyan}{16}=\textcolor{orange}{(A+B)x}+\textcolor{cyan}{(-5A-2B)}
		$$
		$$
			\implies \textcolor{orange}{5x}=\textcolor{orange}{(A+B)x}\implies A+B=5
		$$
		$$
		\implies \textcolor{cyan}{-16}=\textcolor{cyan}{-5A-2B}\implies 5A+2B=16
		$$

		Das kann man jetzt lösen.

		$$
			A=2;B=3
		$$
	2. **Zuhaltemethode**

		Die Zuhaltemethode ist ein längeres Verfahren und nicht empfohlen, aber trotzdem möglich. Es wird [hier](https://www.ingenieurkurse.de/hoehere-mathematik-analysis-lineare-algebra/integralrechnung/unbestimmte-integrale/partialbruchzerlegung-rationale-zahlen-bei-unbestimmten-integralen.html#iv-bestimmung-der-koeffizienten) beschrieben.

4. **Umformulieren des Integrals**

   Jetzt kann man das Integral umformulieren. Der echt gebrochenrationale Teil wird durch das Ergebnis aus 3. ersetzt.

   $$
	\int x+2+\frac{{5x-16}}{x^2-7x+10}dx=\int x+2+ \frac{2}{x-2}+\frac{3}{x-5}dx
   $$

   Da $\int a(x)+b(x)dx=\int a(x)dx+\int b(x)$ kann man das umformen auf

   $$
	\int (x+2)dx+\int \frac{2}{x-2}dx+\int \frac{3}{x-5}dx
   $$

5. **Einsetzen der Nullstellen**
	1. **Einfache Nullstellen**

	   Bei einfachen Nullstellen gilt:

	   $$
		\int \frac{A\cdot dx}{x-x_{0}}=A\cdot \ln|x-x_{0}|+c
	   $$
	2. **Mehrfache Nullstellen**

	   Bei Nullstellen des Grades $n\neq 1$ gilt:

	   $$
		\int \frac{A\cdot dx}{(x-x_{0})^n}=\frac{A}{(1-n)(x-x_{0})^{n-1}}+c
	   $$
	
	3. **Terme der Form $x^2+1$**

	   Für Terme mit $x^2+1$ im Nenner gilt:

	   $$
		\int \frac{{Ax\cdot B}}{x^2+1}dx=\int \frac{Ax}{x^2+1}+\int \frac{B}{x^2+1}
	   $$
	   $$
		\int \frac{{Ax}}{x^2+1}=\frac{A}{2}\ln|x^2+1|+c
	   $$
	   $$
		\int \frac{A}{x^2+1}=A \arctan (x)+c
	   $$

   Im Beispiel gibt es nur einfache Nullstellen, also gilt:

   $$
	\int (x+2)dx+\int \frac{2}{x-2}dx+\int\frac{3}{x-5}dx=
   $$
   $$
	=- \frac{2}{x+1}+2\ln |x-2|+3\ln|x-5|+C
   $$

Die vollständige Beispielberechnung findet man auf [Lernhelfer](https://www.lernhelfer.de/schuelerlexikon/mathematik-abitur/artikel/integration-durch-partialbruchzerlegung).

---

# Quellen

- [MA Vorlesungsblatt 9 (A. Wipfler, 2025)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_09.pdf)
- [Integration durch Partialbruchzerlegung (lernhelfer.de, 2026)](https://www.lernhelfer.de/schuelerlexikon/mathematik-abitur/artikel/integration-durch-partialbruchzerlegung)
- [Partialbruchzerlegung, Abschnitt IV (ingenieurkurse.de, 2026)](https://www.ingenieurkurse.de/hoehere-mathematik-analysis-lineare-algebra/integralrechnung/unbestimmte-integrale/partialbruchzerlegung-rationale-zahlen-bei-unbestimmten-integralen.html#iv-bestimmung-der-koeffizienten)

---

# LaTeX Summary

## [[#Gebrochenrationale Funktionen|Gebrochenrationale Funktionen]]

```latex
f(x)=\frac{Z(x)}{N(x)}
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung]]

```latex
\int f(x)dx=\int \frac{Z(x)}{N(x)}dx

\int f(x) = \int \frac{{x^3-5x^2+x+4}}{x^2-7x+10}
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Umwandeln in eine echt gebrochenrationale Funktion]]

```latex
\int f(x)dx=\int x+2+\frac{{5x-16}}{x^2-7x+10}dx
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Herausfinden der Nullstellen des Nenners]]

```latex
-\frac{p}{2}\pm \sqrt{ \frac{p^2}{4}-q }=-\frac{-7}{2}\pm \sqrt{ \frac{(-7)^2}{4}-10 }=\frac{7}{2}\pm \sqrt{ \frac{9}{4} }=\frac{7}{2}\pm \frac{3}{2}

\implies x_{1}=2;x_{2}=5
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Bestimmung der Koeffizienten $A_{i}$]]

```latex
f_{echt}(x)=\frac{A_{0}}{x-x_{0}}+\frac{A_{1}}{x-x_{1}}+\dots+\frac{A_{k}}{x-x_{k}}=\sum_{i=1}^k \frac{A_{i}}{x-x_{i}}

\frac{5x-16}{x^2-7x-10}=\frac{A}{x-2}+\frac{B}{x-5}
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Koeffizientenvergleich]]

```latex
\frac{\textcolor{orange}{5x}-\textcolor{cyan}{16}}{x^2-7x-10}=\dots=\frac{{\textcolor{orange}{(A+B)x}+\textcolor{cyan}{(-5A-2B)}}}{x^2-7x-10}

\textcolor{orange}{5x}-\textcolor{cyan}{16}=\textcolor{orange}{(A+B)x}+\textcolor{cyan}{(-5A-2B)}

\implies \textcolor{orange}{5x}=\textcolor{orange}{(A+B)x}\implies A+B=5

\implies \textcolor{cyan}{-16}=\textcolor{cyan}{-5A-2B}\implies 5A+2B=16

A=2;B=3
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Umformulieren des Integrals]]

```latex
\int x+2+\frac{{5x-16}}{x^2-7x+10}dx=\int x+2+ \frac{2}{x-2}+\frac{3}{x-5}dx

\int (x+2)dx+\int \frac{2}{x-2}dx+\int \frac{3}{x-5}dx
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Einfache Nullstellen]]

```latex
\int \frac{A\cdot dx}{x-x_{0}}=A\cdot \ln|x-x_{0}|+c
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Mehrfache Nullstellen]]

```latex
\int \frac{A\cdot dx}{(x-x_{0})^n}=\frac{A}{(1-n)(x-x_{0})^{n-1}}+c
```

## [[#Partialbruchzerlegung|Partialbruchzerlegung ➔ Terme der Form $x^2+1$]]

```latex
\int \frac{{Ax\cdot B}}{x^2+1}dx=\int \frac{Ax}{x^2+1}+\int \frac{B}{x^2+1}

\int \frac{{Ax}}{x^2+1}=\frac{A}{2}\ln|x^2+1|+c

\int \frac{A}{x^2+1}=A \arctan (x)+c

\int (x+2)dx+\int \frac{2}{x-2}dx+\int\frac{3}{x-5}dx=

=- \frac{2}{x+1}+2\ln |x-2|+3\ln|x-5|+C
```
