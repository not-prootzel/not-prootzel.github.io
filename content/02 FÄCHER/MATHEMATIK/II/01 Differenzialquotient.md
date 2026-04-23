---
publish: true
tags: []
aliases: []
---

# Grenzwerte von Funktionen

$$
|f(x)-L|<\epsilon \text{ falls } |x-x_{0}|<\delta
$$

$$
L=\lim_{ x \to x_{0} } f(x)
$$

![[Pasted image 20260413085249.png]]

## Rechenregeln des Grenzwertes

> [!NOTE] $\lim$ ist kein vollständiger Ausdruck für den Grenzwert, es müsste eigentlich $\lim_{ x \to x_{0} }$ sein, wurde aber für Lesbarkeit/Druckbarkeit weggelassen

$$
\lim (f(x)\pm g(x))=\lim f(x) \pm \lim g(x)
$$

$$
\lim (f(x)*g(x))=(\lim f(x))*(\lim g(x))
$$

$$
\lim (c*f(x))=c*\lim f(x) \text{; nur falls } c \text{ konstant}
$$

$$
\lim \frac{f(x)}{g(x)}=\frac{{\lim f(x)}}{\lim g(x)}
$$

$$
\lim (f(x))^n=(\lim f(x))^n
$$

$$
\lim \sqrt[n]{ f(x) }=\sqrt{ \lim  f(x) }
$$

$$
\lim (a^{f(x)})=a^{\lim f(x)}
$$

$$
\lim (\log_{a} f(x))=\log_{a}(\lim f(x))
$$

# Stetigkeit

Eine Funktion $f(x)$ ist stetig an der Stelle $x_{0}$, wenn:

1. $f(x_{0})$ definiert ist
2. $L=\lim_{ x \to x_{0} }f(x)$ definiert ist
3. $f(x_{0})=L$

# Differenzierbarkeit

Eine Funktion $f(x)$ ist differenzierbar an der Stelle $x_{0}$, wenn:

$$
	L=\lim_{ \Delta x \to 0 } \frac{{f(x_{0}+\Delta x)-f(x_{0})}}{\Delta x}
$$

existiert. $L$ ist dann die erste Ableitung von $f(x)$ an der Stelle $x_{0}$.

$$
	L=y'(x_{0})=f'(x_{0})=\frac{dy}{dx}\bigg|_{x=x_{0}}^{}
$$

# Differentialquotienten

Die hier berechneten Differentialquotienten sind in der [[Ableitungs- und Integrationstabelle]] zu finden. Der Differentialquotient ist in dem Sinne gleich einer Ableitung.

# Quellen

[Vorlesungsblatt 1](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_01.pdf)

# LaTeX

## Grenzwert

$$
\lim_{ x \to \infty } f(x)
$$

```tex title="Grenzwert grundlegende Syntax"
\lim_{ x \to \infty } f(x)
```

### [[#Grenzwerte von Funktionen]]

```tex title="Grenzwerte von Funktionen"
|f(x)-L|<\epsilon \text{ falls } |x-x_{0}|<\delta
L=\lim_{ x \to x_{0} } f(x)
```

### [[#Rechenregeln des Grenzwertes]]

```tex title="Rechenregeln des Grenzwertes"
\lim (f(x)\pm g(x))=\lim f(x) \pm \lim g(x)
\lim (f(x)*g(x))=(\lim f(x))*(\lim g(x))
\lim (c*f(x))=c*\lim f(x) \text{; nur falls } c \text{ konstant}
\lim \frac{f(x)}{g(x)}=\frac{{\lim f(x)}}{\lim g(x)}
\lim (f(x))^n=(\lim f(x))^n
\lim \sqrt[n]{ f(x) }=\sqrt{ \lim  f(x) }
\lim (a^{f(x)})=a^{\lim f(x)}
\lim (\log_{a} f(x))=\log_{a}(\lim f(x))
```

## [[#Differenzierbarkeit]]

```tex title="Differenzierbarkeit"
L=\lim_{ \Delta x \to 0 } \frac{{f(x_{0}+\Delta x)-f(x_{0})}}{\Delta x}
L=y'(x_{0})=f'(x_{0})=\frac{dy}{dx}\bigg|_{x=x_{0}}
```
