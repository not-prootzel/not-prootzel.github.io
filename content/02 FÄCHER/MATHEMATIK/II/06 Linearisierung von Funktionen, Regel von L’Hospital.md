---
publish: true
tags: []
aliases: []
---

# Linearisierung von Funktionen

> [!NOTE] Die Linearisierung von Funktionen entspricht ungefähr lokalen Ableitungen

Bei der Linearisierung von Funktionen handelt es sich um den Versuch, eine Funktion bzw. einen Funktionsgraphen durch eine einfachere lineare Funktion zu vereinfachen.

Die Linearisierung $f(x)$ der Funktion $f(x)$ an der Stelle $x_{0}$ lässt sich durch

$$
	df=f'(x_{0})\cdot dx;\space l'(x)=\frac{dl(x)}{dx}=df
$$

ausdrücken.

# Regel von d'Hospital

Die Regel von l'Hospital erlaubt die Grenzwertbestimmung von Termen wie $\frac{0}{0}$ oder $\frac{\infty}{\infty}$. Es gilt:

$$
	\lim_{ x \to x_{0} } \frac{f(x)}{g(x)}=\lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}=\dots=\lim_{ x \to x_{0} } \frac{f^{(n)}(x)}{g^{(n)}(x)}
$$

Das heißt, man leitet den Nenner und Zähler so lange ab, bis ein berechenbarer Ausdruck steht.

## Weitere Fälle

Mithilfe ein paar Umformungen lassen sich weitere Fälle ausrechnen:

| Fall                                                            | Formel                                                                                                                               |
| --------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ |
| $$u(x)\cdot v(x)=0\cdot \infty$$                                | $$\large \lim_{ x \to x_{0} } u(x)\cdot v(x)=\lim_{ x \to x_{0} } \frac{u(x)}{\frac{1}{v(x)}}$$                                      |
| $$u(x)\cdot v(x)=\infty-\infty $$                               | $$\large \lim_{ x \to x_{0} } u(x)\cdot v(x)=\lim_{ x \to x_{0} } \frac{{\frac{1}{v(x)}-\frac{1}{u(x)}}}{\frac{1}{u(x)\cdot v(x)}}$$ |
| $$u(x)^{v(x)}=0^0\text{ oder }\infty^0 \text{ oder } 1^\infty$$ | $$\large \lim_{ x \to x_{0} } u(x)^{v(x)}=e^{\lim_{ x \to x_{0} } \frac{\ln u(x)}{\frac{1}{v(x)}}}$$                                 |

# Newtonsches Verfahren

Das newtonsche Verfahren ist ein iteratives Verfahren zum ungefähren Bestimmen von Nullstellen. Es lautet wie folgt:

1. Bestimmung eines Startwerts $x_{0}$
2. Iteriere die folgende Formel, bis das Ergebnis sich innerhalb der geforderten Genauigkeit **nicht mehr ändert**
   $$
   	x_{n+1}=x_{n}-\frac{f(x_{n})}{f'(x_{n})}
   $$

# Quellen

[Vorlesungsblatt 6](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_06.pdf?forcedownload=1)

[Studyflix - Regel von l'Hospital](https://studyflix.de/mathematik/lhospital-1869)

# Latex

## [[#Linearisierung von Funktionen]]

```latex title="Linearisierung von Funktionen"
df=f'(x_{0})\cdot dx;\space l'(x)=\frac{dl(x)}{dx}=df
```

## [[#Regel von d'Hospital]]

```latex title="Regel von d'Hospital"
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)}=\lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}=\dots=\lim_{ x \to x_{0} } \frac{f^{(n)}(x)}{g^{(n)}(x)}
```

### [[#Weitere Fälle]]

```latex title="Fall 1"
u(x)\cdot v(x)=0\cdot \infty

\large \lim_{ x \to x_{0} } u(x)\cdot v(x)=\lim_{ x \to x_{0} } \frac{u(x)}{\frac{1}{v(x)}}
```

```latex title="Fall 2"
u(x)\cdot v(x)=\infty-\infty

\large \lim_{ x \to x_{0} } u(x)\cdot v(x)=\lim_{ x \to x_{0} } \frac{{\frac{1}{v(x)}-\frac{1}{u(x)}}}{\frac{1}{u(x)\cdot v(x)}}
```

```latex title="Fall 3"
u(x)^{v(x)}=0^0\text{ oder }\infty^0 \text{ oder } 1^\infty

\large \lim_{ x \to x_{0} } u(x)^{v(x)}=e^{\lim_{ x \to x_{0} } \frac{\ln u(x)}{\frac{1}{v(x)}}}
```

## [[#Newtonsches Verfahren]]

```latex title="Newtonsches Verfahren"
x_{n+1}=x_{n}-\frac{f(x_{n})}{f'(x_{n})}
```
