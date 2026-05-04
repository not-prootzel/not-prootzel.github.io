---
publish: true
tags: []
aliases: []
---

# Harmonische Schwingungen und ihre Differenzialgleichung (DGL)

Harmonische Schwingungen treten auf, wenn es eine der Auslenkung proportionale entgegengesetzte Rückstellkraft gibt, z.B. in einem Federpendel $F=-k\cdot\Delta x$.

Mit dem zweiten Newtonschen Axiom ($F=m\cdot a$) und dem Zusammenhang zwischen Strecke und Beschleunigung ($a=\dot{v}=\ddot{x}$) wird daraus die Differenzialgleichung

$$
	m \ddot{x}+kx=0
$$

Die Lösungen einer Differenzialgleichung sind alle Funktionen $x(t)$, die sie erfüllen. Beispiele für die obenstehende Gleichung sind

$$
	\sin\left( \sqrt{ \frac{k}{m}t } \right),\cos\left( \sqrt{ \frac{k}{m}t } \right), e^{j\cdot \sqrt{ k/m \cdot t }}, e^{-j\cdot \sqrt{ k/m \cdot t }}
$$

Die Eigenfrequenz $\omega_{0}$ des Federpendels ist

$$
	w_{0}=\sqrt{ \frac{k}{m} }
$$

Die Eigenfrequenz $\omega_{0}$ ist direkt proportional zur $f_{0}$ und indirekt proportional zur Schwingungsdauer $T_{0}$.

$$
	\omega_{0}=2\pi f_{0}=\frac{2\pi}{T_{0}}
$$

## Differenzialgleichung

Die **Ordnung** einer DGL wird durch die höchste vorkommende Ableitung definiert.

$$
	\dot{x}\implies\text{1. Ordnung}
$$
$$
	\ddot{x}\implies\text{2. Ordnung}
$$

Bei harmonischen Schwingungen handelt es sich um DGLs der 2. Ordnung. Die allgemeine Formulierung der freien ungedämpften Schwingung ist

$$
	\ddot{x}+w_{0}^2=0
$$

Dabei ist die **allgemeine Lösung**

$$
	x(t)=a \cos(\omega_{0}t)+b \sin(\omega_{0})=ce^{j\omega_{0}t}+de^{-j\omega_{0}t}
$$

Für die **spezielle Lösung** muss man $a$ und $b$ bzw. $c$ und $d$ aus den Anfangsbedingungen berechnen.

$$
	a=x(0);b=\frac{\dot{x}(0)}{\omega_{0}}
$$

## Energie

Beim Schwingungsprozess wird kontinuierlich Energie umgewandelt. Die Gesamtenergie im System bleibt aber konstant.

$$
	E=\frac{1}{2}m\dot{x}^2+\frac{1}{2}kx^2
$$

# Arten von Schwingungen

## Mathematisches Pendel

$$
	T=2\pi \sqrt{ \frac{l}{g} };\space\space\phi(t)=a\cos \sqrt{ \frac{g}{l} }t+b\cos \sqrt{ \frac{g}{l} }t
$$

$l$: Länge des Pendelarms

## Torsionspendel

$$
	T=2\pi \sqrt{ \frac{I}{k_{t}} };\space\space\phi(t)=a \cos \sqrt{ \frac{k_{i}}{I} }t+b\cos \sqrt{ \frac{k_{t}}{I} }t
$$

!TODO: Das hier rausfinden
$I$: Trägheit?
$k_{t}$: Federkonstante der Schwingung??

## Physikalisches Pendel

$$
	l_{red}=\frac{I}{ml}
$$

$l_{red}$: Reduzierte Pendellänge. Die Reduzierte Pendellänge ist die Länge eines mathematischen Pendels mit der gleichen Schwingungsdauer.

$$
	T=2\pi \sqrt{ \frac{I}{mgl} }=2\pi \sqrt{ \frac{l_{red}}{g} }
$$
$$
	\phi(t)=a\cos \sqrt{ \frac{mgl}{I} }t + b\cos \sqrt{ \frac{mgl}{I} }t=a\cos \sqrt{ \frac{l_{red}}{g} }t+b\cos \sqrt{ \frac{l_{red}}{g} }t
$$

## Elektrischer Schwingkreis

$$
	T=2\pi \sqrt{ LC };\space\space U_{C}(t)=U_{0}\cdot \cos\left( \frac{t}{LC} \right) \text{ wenn }U_{C}(0)=U_{0} \text{ (Kondensator ungeladen)}
$$

$L$: Induktivität der Spule
$C$: Kapazität des Kondensators
$U_{C}$: Spannung am Kondensator
$U_{0}$: Spannung an der Quelle

---

# KI-Nutzung

Google's [NotebookLM](https://notebooklm.google) hat mit dem Finden der Überschriften geholfen. Außerdem war es vor allem eine Hilfe bei den folgenden Überschriften:

- [[#Harmonische Schwingungen und ihre Differenzialgleichung (DGL)|Harmonische Schwingungen und ihre Differenzialgleichung (DGL)]]

Folgende Quellen hat es verwendet:

- [PH 2 Vorlesung 1 (A. Wipfler, 2026)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443795/mod_resource/content/0/Ph_2_01.pdf)

Alle Texte wurden von Menschen verfasst.

# Quellen

[PH 2 Vorlesung 1 (A. Wipfler, 2026)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443795/mod_resource/content/0/Ph_2_01.pdf)

---

# LaTeX

$$
	a=\dot{v}=\ddot{x}
$$

```latex title="Ableitungen"
a=\dot{v}=\ddot{x}
```

## [[#Harmonische Schwingungen und ihre Differenzialgleichung (DGL)]]

```latex
m \ddot{x}+kx=0

\sin\left( \sqrt{ \frac{k}{m}t } \right),\cos\left( \sqrt{ \frac{k}{m}t } \right), e^{j\cdot \sqrt{ k/m \cdot t }}, e^{-j\cdot \sqrt{ k/m \cdot t }}

w_{0}=\sqrt{ \frac{k}{m} }

\omega_{0}=2\pi f_{0}=\frac{2\pi}{T_{0}}
```

## [[#Differenzialgleichung]]

```latex
\dot{x}\implies\text{1. Ordnung}

\ddot{x}\implies\text{2. Ordnung}

\ddot{x}+w_{0}^2=0

x(t)=a \cos(\omega_{0}t)+b \sin(\omega_{0})=ce^{j\omega_{0}t}+de^{-j\omega_{0}t}

a=x(0);b=\frac{\dot{x}(0)}{\omega_{0}}
```

## [[#Energie]]

```latex
E=\frac{1}{2}m\dot{x}^2+\frac{1}{2}kx^2
```

## [[#Mathematisches Pendel]]

```latex
T=2\pi \sqrt{ \frac{l}{g} };\space\space\phi(t)=a\cos \sqrt{ \frac{g}{l} }t+b\cos \sqrt{ \frac{g}{l} }t
```

## [[#Torsionspendel]]

```latex
T=2\pi \sqrt{ \frac{I}{k_{t}} };\space\space\phi(t)=a \cos \sqrt{ \frac{k_{i}}{I} }t+b\cos \sqrt{ \frac{k_{t}}{I} }t
```

## [[#Physikalisches Pendel]]

```latex
l_{red}=\frac{I}{ml}

T=2\pi \sqrt{ \frac{I}{mgl} }=2\pi \sqrt{ \frac{l_{red}}{g} }

\phi(t)=a\cos \sqrt{ \frac{mgl}{I} }t + b\cos \sqrt{ \frac{mgl}{I} }t=a\cos \sqrt{ \frac{l_{red}}{g} }t+b\cos \sqrt{ \frac{l_{red}}{g} }t
```

## [[#Elektrischer Schwingkreis]]

```latex
T=2\pi \sqrt{ LC };\space\space U_{C}(t)=U_{0}\cdot \cos\left( \frac{t}{LC} \right) \text{ wenn }U_{C}(0)=U_{0} \text{ (Kondensator ungeladen)}
```
