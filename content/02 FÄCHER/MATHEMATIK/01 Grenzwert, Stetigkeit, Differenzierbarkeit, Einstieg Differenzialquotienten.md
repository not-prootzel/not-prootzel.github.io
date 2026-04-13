---
publish: true
tags:
aliases:
---
# Grenzwerte von Funktionen
$$|f(x)-L|<\epsilon \text{ falls } |x-x_{0}|<\delta$$
$$L=\lim_{ x \to x_{0} } f(x)$$
![[Pasted image 20260413085249.png]]
## Rechenregeln des Grenzwertes

> [!NOTE] $\lim$ ist kein vollständiger Ausdruck für den Grenzwert, es müsste eigentlich $\lim_{ x \to x_{0} }$ sein, wurde aber für Lesbarkeit/Druckbarkeit weggelassen

$$\lim (f(x)\pm g(x))=\lim f(x) \pm \lim g(x)$$
$$\lim (f(x)*g(x))=(\lim f(x))*(\lim g(x))$$
$$\lim (c*f(x))=c*\lim f(x) \text{; nur falls } c \text{ konstant}$$
$$\lim \frac{f(x)}{g(x)}=\frac{{\lim f(x)}}{\lim g(x)}$$
$$\lim (f(x))^n=(\lim f(x))^n$$
$$\lim \sqrt[n]{ f(x) }=\sqrt{ \lim  f(x) }$$
$$\lim (a^{f(x)})=a^{\lim f(x)}$$
$$\lim (\log_{a} f(x))=\log_{a}(\lim f(x))$$



# LaTeX
## Grenzwert
$$\lim_{ x \to \infty } f(x)$$
```tex
\lim_{ x \to \infty } f(x)
```
### [[#Grenzwerte von Funktionen]]
```tex
|f(x)-L|<\epsilon \text{ falls } |x-x_{0}|<\delta
L=\lim_{ x \to x_{0} } f(x)
```
### [[#Rechenregeln des Grenzwertes]]
```tex title="[[#Rechenregeln des Grenzwertes]]"
\lim (f(x)\pm g(x))=\lim f(x) \pm \lim g(x)
\lim (f(x)*g(x))=(\lim f(x))*(\lim g(x))
\lim (c*f(x))=c*\lim f(x) \text{; nur falls } c \text{ konstant}
\lim \frac{f(x)}{g(x)}=\frac{{\lim f(x)}}{\lim g(x)}
\lim (f(x))^n=(\lim f(x))^n
\lim \sqrt[n]{ f(x) }=\sqrt{ \lim  f(x) }
\lim (a^{f(x)})=a^{\lim f(x)}
\lim (\log_{a} f(x))=\log_{a}(\lim f(x))
```