---
publish: true
tags: [analysis, differential, integral]
aliases: []
---

# Definition

Ein bestimmtes Integral im Bereich $[a,b]$ beschreibt die Größe der Fläche zwischen einem Graphen $g$ der Funktion $f(x)$ und $y=0$ von $a$ bis $b$.

$$
	\int^b_{a}f(x)dx=\lim_{ n \to \infty } \sum^{n-1}_{k=0}f(x_{k})\Delta x \text{ mit } \Delta x=\frac{{b-a}}{n} \text{ und } x_{k}=a+k\Delta x
$$

Das unbestimmte Integral $I(x)$ einer Funktion $f(x)$ ist definiert als

$$
	I(x)=\int^x_{a} f(t) dt
$$

Es beschreibt die Fläche unter der Funktion im Bereich $[a,x]$.

# Hauptsatz der Differenzial- und Integralrechnung

## Zusammenhang mit Stammfuntionen

Jedes unbestimmte Integral einer Funktion $f(x)$ ist deren Stammfunktion:

$$I(x)=\int_{a}^x f(t)dt \implies \frac{dI}{dx}=f(x)$$

Es gilt allgemein:

$$
	I(x)=\int_{a}^xf(t)dt=\int f(x)dx=F(x)+c;\space c=\text{konst.}
$$

## Berechnung von Integralen

$$
	\int_{a}^b f(x)dx=F(b)-F(a)
$$

# Eigenschaften von Integralen

## Linearität

$$
	\int_{a}^b (m\cdot f(x)+n\cdot g(x))dx=m \int_{a}^b f(x)dx+n\int_{a}^b g(x)dx
$$

Linearität gilt auch für unbestimmte Integrale.

## Intervallregel

$$
	\int_{a}^c f(x)dx=\int_{a}^b f(x)dx + \int_{b}^c f(x)dx
$$

## Intervallgrenzen

$$
	\int_{a}^af(x)dx=0
$$
$$
	\int_{a}^b f(x)dx=-\int_{b}^a f(x)dx
$$

## Mittelwertsatz der Integralrechnung

$f(x)$ sei stetig in $]a;b[$ => es gibt mindestens eine Stelle $E$, an der sich die vom Integral gemachte gezeichnete Rechtecksfläche und die Funktion $f(x)$ sich schneiden.

$$
	\int_{a}^b f(x)dx=(b-a)\cdot f(E);\space E \in[a;b]
$$

![[02 FÄCHER/MATHEMATIK/II/attachments/07 Integralrechnung/file-20260429113321200.png]]

# Produktintegration/Partielle Integration

Die partielle Integration ist eine Methode, um ein Integral aus dem Produkt von zwei Funktionen zu berechnen.

$$
	\int u'(x)\cdot v(x)dx=u(x)\cdot v(x)-\int u(x)\cdot v'(x)dx+C
$$

Bei bestimmten Integralen gilt

$$
	\int_{a}^bu'(x)\cdot v(x)dx=u(x)\cdot v(x)\bigg|_{a}^{b}-\int_{a}^bu(x)\cdot v'(x)dx
$$

# Quellen

- [Vorlesungsblatt 7 (A. Wipfler, 2026)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_07.pdf)
