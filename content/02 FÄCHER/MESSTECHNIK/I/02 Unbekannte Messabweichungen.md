---
publish: true
tags: [messabweichung]
aliases: []
---

Messwerte sind voller unbekannter Schwankungen. Das heißt, der gemessene Wert wird eine unbekannte Messabweichung haben.

Man unterscheidet **zufällige** und **systematische** Messabweichungen.

- **Zufällige Messabweichungen** sind zufällig, aber sind durchschnittlich 0 (z.B. Rauschen)
- **Systematische Messabweichungen** sind Messabweichungen, die konstant da sind und nicht durchschnittlich 0 ergeben (z.B. eine Uhr geht vor)

Eine gute Schätzung der Messabweichungen lässt sich durch eine **Wahrscheinlichkeitsverteilung** modellieren.

# Wahrscheinlichkeitsverteilungen

## Normierung

Fürs Verständnis: "Die Summe aller Chancen ergibt 100%". Das ist aber keine gültige Erklärung bei kontinuierlichen Verteilungen (Integralen), sondern nur bei diskreten Verteilungen (Summenzeichen).

$$
	\int_{-\infty}^\infty f(x)dx=1
$$

## Wahrscheinlichkeit

Die Wahrscheinlichkeit, dass eine Messgröße im Bereich $[a,b]$ liegt. Die Wahrscheinlichkeit bei $a=b$ ist bei kontinuierlichen Verteilungen immer 0 (= unendlich dünner Abschnitt einer Verteilung).

$$
	P_{a\leq x\leq b}=\int_{a}^b f(x)dx
$$

## Erwartungswert

Der Erwartungswert $\mu$ beschreibt den durchschnittlichen erwarteten Wert. Bei glockenförmigen Verteilungen ist das die Spitze der Glocke.

Für diskrete Wahrscheinlichkeitsverteilungen gilt:

$$
	\mu=P_{1}\cdot x_{1}+P_{2}\cdot x_{2}+\dots +P_{n}\cdot x_{n}=\sum_{k=1}^n P_{k}\cdot x_{k}
$$

Bei kontinuierlichen Wahrscheinlichkeitsverteilungen lässt sich der Erwartungswert nicht wirklich berechnen.

!TODO: Fact check das

## Varianz

Die Varianz ist ein Maß für die Streuung um den Mittelwert.

$$
	\sigma^2=\int_{-\infty}^\infty (x-\mu)^2f(x)dx
$$

## Standardabweichung

Die Standardabweichung ist ein weiteres Maß für die Streuung um den Mittelwert. Sie ist die Wurzel der Varianz.

$$
	\sigma=\sqrt{ \sigma^2 }=\sqrt{ \int_{-\infty}^\infty (x-\mu)^2f(x)dx }
$$

# Verteilungsformen

## Normalverteilung (Gaußverteilung)

Die Normalverteilung bzw. Gaußverteilung ist eine der wichtigsten Wahrscheinlichkeitsverteilungen. Sie nimmt eine Glockenform an.

$$
	\large f(x)=\frac{1}{\sqrt{ 2\pi }\cdot \sigma}\cdot e^{-\frac{1}{2}(\frac{x-\mu}{\sigma})^2}
$$

![[02 FÄCHER/MESSTECHNIK/I/attachments/02 Unbekannte Messabweichungen/file-20260430110703701.png]]

Die Wahrscheinlichkeit, dass ein Wert innerhalb von $n$ [[#Standardabweichung|Standardabweichungen]] um den [[#Erwartungswert]] liegt, lautet:
$$
\large
\begin{array}{ c c c}
p_{\sigma}=68,3\%&\quad p_{2\sigma}=95,45\%&\quad p_{3\sigma}=99,73\%
\end{array}
$$

## Gleichverteilung

Die Gleichverteilung gibt vor, dass die Wahrscheinlichkeitsdichte in einem Intervall $[a,b]$ konstant und außerhalb $0$ ist.

$$
f(x) \begin{cases} \frac{1}{b-a} & \text{ f\"ur } a\leq x\leq b \\ 0 & \text{sonst} \end{cases} 
$$

![[02 FÄCHER/MESSTECHNIK/I/attachments/02 Unbekannte Messabweichungen/file-20260505115509466.png]]

Für die Gleichverteilung gilt:
$$
    \large
	\begin{array}{c c c}
	\mu=\frac{{b+a}}{2} & \sigma^2=\frac{(b-a)^2}{12} & \sigma=\frac{{b-a}}{\sqrt{ 12 }}
	\end{array}
$$

Innerhalb einer [[#Standardabweichung]] um den [[#Erwartungswert]] liegen bei einer Gleichverteilung etwa $57,54\%$ der Messwerte.
$$
	p_{\sigma}=57,54\%
$$

# Bestimmung von Unsicherheiten

## Unsicherheitstypen

Der [GUM](https://www.bipm.org/documents/20126/2071204/JCGM_100_2008_E.pdf/cb0ef43f-baa5-11cf-3f85-4dcd86f77bd6?version=1.10&t=1659082531978&download=true) unterscheidet zwischen Unsicherheiten von Typ A und Typ B.

### Unsicherheit Typ A

Hier wird eine [[#Normalverteilung (Gaußverteilung)|Normalverteilung]] angenommen.

**Empirischer Mittelwert**

$$
	\overline{x}=\frac{1}{n}\sum^n_{k=1}x_{k}
$$

**Empirische Varianz der Einzelmessung**

$$
	s^2=\frac{1}{n-1}\sum^n_{k=1}(x_{k}-\overline{x})^2
$$

**Empirische Standardabweichung der Einzelmessung**

$$
	s=\sqrt{ \frac{1}{n-1}\sum^n_{k=1}(x_{k}-\overline{x})^2 }
$$

Der Mittelwert wird hier als beste Schätzung für den wahren Wert der Messgröße verwendet, da die Streuung des Mittelwerts um den wahren Wert geringer ist als die der Einzelmessung.

$$
	\begin{array}{c c}
	s^2_\overline{{x}}=\frac{1}{n(n-1)}\sum^n_{k=1}(x_{k}-\overline{x})^2 & s_\overline{{x}}=\frac{s}{\sqrt{ n }}=\sqrt{ \frac{1}{n(n-1)} \sum^n_{k=1}(x_{k}-x)^2 }
	\end{array}
$$

### Unsicherheit Typ B

Unter dem Typ B versteht man die Ermittlung der Unsicherheit anhand von weiteren Informationen. Dazu gehören z.B. Herstellerangaben. Hier nimmt man eine [[#Gleichverteilung]] an. Als Unsicherheit wird eine [[#Standardabweichung]] gewählt.

### Bestimmung Angabe von Messergebnissen

1. **Messung**
   Bei einer Messreihe wird der empirische Mittelwert als Messwert verwendet
2. **Bestimmung der Unsicherheit**
   Typ A: Empirische Standardabweichung des Mittelwerts
   Typ B: Standardabweichung der Gleichverteilung
3. **Angabe**
   Angabe von Messwert und Unsicherheit als
   $$
	x\pm\Delta x
   $$
   Die Angabe erfolgt mit maximal 2 gültigen Stellen und wird ggf. aufgerundet. Der Messwert ist mit derselben Anzahl an Stellen anzugeben:
   $$
	U=(5,01\pm 0,12)V
   $$
   Alternativ kann man eine relative Unsicherheit angeben
   $$
	\Delta x_{rel}=\frac{\Delta x}{x}
   $$
   z.B. $U=5,01V+2,4\%$

# Fortpflanzung von Unsicherheiten (nach Gauß)

Wenn eine Größe als Funktion mehrerer unsicherheitsbehafteter Messwerte angegeben wird:
$$
	y=f(x_{1},x_{2},\dots,x_{m})
$$
so kann deren Unsicherheit angegeben werden durch:
$$
	\Delta y=\sqrt{ \sum^m_{k=1} \left( \partial \frac{f}{\partial x_{k}}\Delta x_{k} \right)^2 }
$$

## Sonderfälle

### Summen und Differenzen

Wenn $y=a_{1}x_{1}+a_{2}x_{2}+\dots+a_{m}x_{m}=\sum^m_{k=1}a_{k}x_{k}$ (Summe von $x$ mit konstanten Vorfaktoren), dann
$$
	\Delta y=\sqrt{ \sum^m_{k=1}a^2_{k}(\Delta x_{k})^2 }
$$
Für $y=x_{1}\pm x_{2}\pm\dots\pm x_{m}=\sum^m_{k=1} x_{k}$ gilt
$$
	\Delta y=\sqrt{ \sum_{k=1}^m (\Delta x_{k})^2 }
$$
=> bei Differenzen und Summen werden die **absoluten Fehler** pythagoreisch addiert.

### Produkte und Quotienten

Bei $y=x_{1}^{a_{1}}+x_{2}^{a_{2}}+\dots+x_{m}^{a_{m}}$ ($x$ mit konstanten Exponenten) gilt für den **relativen** Fehler:

$$
\frac{\Delta y}{y}=\sqrt{ \sum^m_{k=1} a^2_{k}\left( \frac{\Delta x_{k}}{x} \right)^2 }
$$

Für Produkte und Quotienten $y=x_{1}^{\pm 1}+x_{2}^{\pm 1}+\dots+x_{k}^{\pm_{1}}$ (Produkt aus $x$ und $\frac{1}{x}$) gilt:

$$
	\frac{\Delta y}{y}=\sqrt{ \sum^m_{k=1}\left( \frac{\Delta x_{k}}{x_{k}} \right)^2 }
$$

---

# Quellen

- [MT Vorlesungsblatt 2 (A. Wipfler, 2025)](https://elearning.dhbw-ravensburg.de/pluginfile.php/446373/mod_resource/content/0/MT1_02.pdf)
-  [Guide to the expression of uncertainty in measurement (GUM) (JCGM/WG 1, 2008)](https://www.bipm.org/documents/20126/2071204/JCGM_100_2008_E.pdf/cb0ef43f-baa5-11cf-3f85-4dcd86f77bd6?version=1.10&t=1659082531978&download=true)
- [Standardabweichung einfach erklaert (StudyFlix)](https://studyflix.de/statistik/standardabweichung-1042)

# KI-Nutzung

Google's Gemini hat mit dem Finden der Überschriften geholfen. Außerdem war es vor allem eine Hilfe bei den folgenden Überschriften:

- [[#Gleichverteilung]]
- [[#Normalverteilung (Gaußverteilung)]]

Alle Texte wurden von Menschen verfasst.

---

# LaTeX Summary

## [[#Normierung|Normierung]]

```latex
\int_{-\infty}^\infty f(x)dx=1
```

## [[#Wahrscheinlichkeit|Wahrscheinlichkeit]]

```latex
P_{a\leq x\leq b}=\int_{a}^b f(x)dx
```

## [[#Erwartungswert|Erwartungswert]]

```latex
\mu=P_{1}\cdot x_{1}+P_{2}\cdot x_{2}+\dots +P_{n}\cdot x_{n}=\sum_{k=1}^n P_{k}\cdot x_{k}
```

## [[#Varianz|Varianz]]

```latex
\sigma^2=\int_{-\infty}^\infty (x-\mu)^2f(x)dx
```

## [[#Standardabweichung|Standardabweichung]]

```latex
\sigma=\sqrt{ \sigma^2 }=\sqrt{ \int_{-\infty}^\infty (x-\mu)^2f(x)dx }
```

## [[#Normalverteilung (Gaußverteilung)|Normalverteilung (Gaußverteilung)]]

```latex
\large f(x)=\frac{1}{\sqrt{ 2\pi }\cdot \sigma}\cdot e^{-\frac{1}{2}(\frac{x-\mu}{\sigma})^2}

\large
\begin{array}{ c c c}
p_{\sigma}=68,3\%&\quad p_{2\sigma}=95,45\%&\quad p_{3\sigma}=99,73\%
\end{array}
```

## [[#Gleichverteilung|Gleichverteilung]]

```latex
f(x) \begin{cases} \frac{1}{b-a} & \text{ f\"ur } a\leq x\leq b \\ 0 & \text{sonst} \end{cases}

\large
	\begin{array}{c c c}
	\mu=\frac{{b+a}}{2} & \sigma^2=\frac{(b-a)^2}{12} & \sigma=\frac{{b-a}}{\sqrt{ 12 }}
	\end{array}

p_{\sigma}=57,54\%
```

## [[#Unsicherheit Typ A|Unsicherheit Typ A]]

```latex
\overline{x}=\frac{1}{n}\sum^n_{k=1}x_{k}

s^2=\frac{1}{n-1}\sum^n_{k=1}(x_{k}-\overline{x})^2

s=\sqrt{ \frac{1}{n-1}\sum^n_{k=1}(x_{k}-\overline{x})^2 }

\begin{array}{c c}
	s^2_\overline{{x}}=\frac{1}{n(n-1)}\sum^n_{k=1}(x_{k}-\overline{x})^2 & s_\overline{{x}}=\frac{s}{\sqrt{ n }}=\sqrt{ \frac{1}{n(n-1)} \sum^n_{k=1}(x_{k}-x)^2 }
	\end{array}
```

## [[#Bestimmung Angabe von Messergebnissen|Bestimmung Angabe von Messergebnissen ➔ Angabe]]

```latex
x\pm\Delta x

U=(5,01\pm 0,12)V

\Delta x_{rel}=\frac{\Delta x}{x}
```

## [[#Fortpflanzung von Unsicherheiten (nach Gauß)|Fortpflanzung von Unsicherheiten (nach Gauß)]]

```latex
y=f(x_{1},x_{2},\dots,x_{m})

\Delta y=\sqrt{ \sum^m_{k=1} \left( \partial \frac{f}{\partial x_{k}}\Delta x_{k} \right)^2 }
```

## [[#Summen und Differenzen|Summen und Differenzen]]

```latex
\Delta y=\sqrt{ \sum^m_{k=1}a^2_{k}(\Delta x_{k})^2 }

\Delta y=\sqrt{ \sum_{k=1}^m (\Delta x_{k})^2 }
```

## [[#Produkte und Quotienten|Produkte und Quotienten]]

```latex
\frac{\Delta y}{y}=\sqrt{ \sum^m_{k=1} a^2_{k}\left( \frac{\Delta x_{k}}{x} \right)^2 }

\frac{\Delta y}{y}=\sqrt{ \sum^m_{k=1}\left( \frac{\Delta x_{k}}{x_{k}} \right)^2 }
```
