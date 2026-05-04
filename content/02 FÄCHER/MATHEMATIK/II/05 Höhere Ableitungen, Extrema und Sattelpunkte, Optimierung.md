---
publish: true
tags: [analysis, ableitung]
aliases: []
---

# Höhere Ableitungen

Wenn eine [[02 Ableitungsregeln|Ableitung]] abgeleitet wird, entsteht eine höhere Ableitung.

$$
f(x)=x;f'(x)=\frac{df(x)}{dx};f''(x)=\frac{df'(x)}{dx}=\frac{d^2f(x)}{dx^2}
$$

$$
	\implies f^{(n)}(x)=\frac{d^nf(x)}{dx^n}
$$

# Extrema und Sattelpunkte

Wenn gilt:

$$
	f^{(n-1)}(x_{0})=0;f^{(n)}(x_{0})\neq 0
$$

dann liegt an $x_{0}$ ein:

- **relatives Extremum wenn $n$ gerade
  $f^{(n)}(x_{0})<n \implies\text{relatives Maximum}$
  $f^{(n)}(x_{0})>n \implies\text{relatives Minimum}$
- **Sattelpunkt wenn $n$ ungerade**

# Optimierungsaufgaben

In Optimierungsaufgaben geht es darum, einen bestimmten Wert zu mini\- oder maximieren. Das nennt man die **Bestimmung von Optima**. Die Voransgehebweise besteht aus drei Schritten:

1. **Formulierung der zu optimierenden Größe**
   Die Größe, die optimiert werden soll, wird als Funktion $f(x)$ formuliert.
2. **Ermittlung möglicher Werte**
   Es werden Werte für $x$ gesammelt, an denen ein Optimum liegen kann. Dazu gehören
   \- Stationäre Punkte $\frac{df(x)}{dx}=0$
   \- Randpunkte
   \- Knicknpunkte
3. **Berechnung der Funktionswerte**
   $f(x)$ wird für alle Werte $x$, die in 2. gefunden wurden, berechnet und das beste Optimum wird ausgewählt.

---

# Quellen

[Vorlesungsblatt 5 (A. Wipfler, 2026)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_05.pdf)

---

# LaTeX Summary

## [[#Höhere Ableitungen]]

```latex
f(x)=x;f'(x)=\frac{df(x)}{dx};f''(x)=\frac{df'(x)}{dx}=\frac{d^2f(x)}{dx^2}

\implies f^{(n)}(x)=\frac{d^nf(x)}{dx^n}

```

## [[#Extrema und Sattelpunkte]]

```latex
f^{(n-1)}(x_{0})=0;f^{(n)}(x_{0})\neq 0

```
