---
publish: true
tags: [messabweichung]
aliases: []
---

# Erweiterte Messunsicherheit nach GUM

Die erweiterte Messunsicherheit $\Delta y_{erw}$ dient dazu, ein Vertrauensintervall anzugeben, innerhalb dessen der wahre Wert mit einer vorgegebenen Wahrscheinlichkeit $p$ liegt. $v_{eff}$ wird [[|hier]] definiert.

$$
	\Delta y_{erw}=t(v_{eff})\cdot\Delta y
$$

> [!NOTE] Man kann es sich vorstellen als $\Delta y_{erw}=t(v_{eff}, p)\cdot\Delta y$

## Freiheitsgrade

Ein Freiheitsgrad $v$ gibt an, wie viele unabhängige Messungen getätigt wurden.

Bei Unsicherheiten vom [[02 FÄCHER/MESSTECHNIK/I/02 Unbekannte Messabweichungen#Unsicherheit Typ A|Typ A]] ist der Freiheitsgrad $v$ von der Anzahl an Messungen $n$ abhängig:

$$
	v=n-1
$$

Bei Unsicherheiten vom [[02 FÄCHER/MESSTECHNIK/I/02 Unbekannte Messabweichungen#Unsicherheit Typ B|Typ B]] wird die vorliegende Information als sehr zuverlässig angenommen. Daher gilt:

$$
	v=\infty
$$

## Welch-Satterthwaite-Gleichung

Wenn eine Messung mit $m$ mehreren Werten der Form

$$
	y=f(x_{1},x_{2},\dots,x_{m})
$$

vorliegt, so berechnet sich der effektive Freiheitsgrad $v_{eff}$ aus der Formel

$$
\large 

	v_{eff}=\frac{(\Delta y)^4}{\sum^m_{k=1} \frac{{\left( \frac{{\partial f}}{\partial x_{k}}\Delta x_{k} \right)^4}}{v_{k}}}
$$

## Kurzanleitung

1. Beschreibung von $f(x_{1},x_{2},x_{3},\dots,x_{m})$
2. Bestimmung von $\Delta y$ als eine Standardabweichung mithilfe der [[02 FÄCHER/MESSTECHNIK/I/02 Unbekannte Messabweichungen#Fortpflanzung von Unsicherheiten (nach Gauß)|Fortpflanzungen von Gauß]]
3. Bestimmung der Freiheitsgrade bei $n$ Messungen
	- Bei [[02 FÄCHER/MESSTECHNIK/I/02 Unbekannte Messabweichungen#Unsicherheit Typ A|Typ A]]: $v=n-1$
	- Bei [[02 FÄCHER/MESSTECHNIK/I/02 Unbekannte Messabweichungen#Unsicherheit Typ B|Typ B]]: $v=\infty$
4. Ermittlung von $v_{eff}$
   $$
\large

	v_{eff}=\frac{(\Delta y)^4}{\sum^m_{k=1} \frac{{\left( \frac{{\partial f}}{\partial x_{k}}\Delta x_{k} \right)^4}}{v_{k}}}
$$
5. Ablesen von $t(v_{eff})$ aus der Tabelle. $v_{eff}$ wird dabei interpoliert oder abgerundet.

# Sensoren als Strom- und Spannungsquelle

Bei einer idealen Strommessung ist der Eingangswiderstand des Messgerätes $R_{M}$ unendlich groß.

Bei einer idealen Spannungsmessung ist der Eingangswiderstand des Messgerätes $R_{M}$ $0$.

# Messung von Widerständen

## Zweileiter-Widerstandsmessung

Bei der Zweileiter-Widerstandsmessung wird eine Stromquelle $I_{0}$ an den Widerstand $R_{S}$ angeschlossen. Die Spannung am Widerstand $U_{M}$ wird parallel zum Widerstand und Sensor gemessen.

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511095703228.png]]

Das Problem ist, dass die Leitungswiderstände $R_{Ltg}$ des Messgerätes in die Messung eingehen, was vor allem bei langen Leitungen oder kleinen Messwerten zu [[02 FÄCHER/MESSTECHNIK/I/01 Einführung, Messabweichungen#Messabweichungen|Messabweichungen]] führen kann.

## Vierleiter-Widerstandsmessung

Bei der Vierleiter-Widerstandsmessung wird die Spannungsmessung über eigene Leitungen gemessen. Solange $R_{M}\to \infty$ fließt durch $U_{M}$ kein Strom, der Spannungsabfall an den Leitungen verursachen könnte.

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511095941443.png]]

# Idealer Operationsverstärker (OP, OP-Amp)

Operationsverstärker sind Spannungsverstärker. Sie haben einen komplexen internen Aufbau.

| ISO                                                                                                                             | DIN                                                                                                                             |
| ------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------- |
| ![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511095201716.png]] | ![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511095209438.png]] |

Selbst in Europa wird üblicherweise das ISO-Schaltzeichen verwendet.

Das Ersatzschaltbild sieht wie folgt aus:

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511095416563.png]]

Die Kennlinie eiens idealen OP-Amps ist 

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511101904282.png]]

> [!NOTE] Auch wenn OP-Amps in der Digitaltechnik vorkommen, haben sie keine Verzögerung!


## Gegenkopplung

In der Gegenkopplung wird der Ausgang des OP-Amps an den negativen Eingang angeschlossen. Das hat eine stabilisierende Wirkung. $U_{a}$ wirkt da Änderungen an $U_{+}$ entgegen und $U_{D}$ wird möglichst klein.

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511100728167.png|400]]

Bei der Gegenkopplung gilt

$$
	\begin{array}{c c}
	U_{d}=0 & I_{+}=I_{-}=0
	\end{array}
$$

Mit verschiedenen Konfigurationen erzielt man verschiedene Ergebnisse.

### Transimpedanzverstärker

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511102525804.png]]

$$
	U_{a}=-I\cdot R_{F}
$$
$$
	U_{a}=U_{e}=0
$$

### Invertierender Verstärker

Beim invertierenden Verstärker gibt es eine Verstärkung um $A$.

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511102722298.png]]

$$
	A=\frac{U_{a}}{U_{e}}=\frac{R_{F}}{R_{G}}
$$

### Nicht-Invertierender Verstärker

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511102746202.png]]



## Mitkopplung

![[02 FÄCHER/MESSTECHNIK/I/attachments/03 Erweiterte Messunsicherheit, Strom- und Spannungsmessung/file-20260511101001944.png]]


---
# LaTeX Summary

## [[#Erweiterte Messunsicherheit nach GUM|Erweiterte Messunsicherheit nach GUM]]

```latex
\Delta y_{erw}=t(v_{eff})\cdot\Delta y
```


## [[#Freiheitsgrade|Freiheitsgrade]]

```latex
v=n-1

v=\infty
```


## [[#Welch-Satterthwaite-Gleichung|Welch-Satterthwaite-Gleichung]]

```latex
y=f(x_{1},x_{2},\dots,x_{m})

\large 

	v_{eff}=\frac{(\Delta y)^4}{\sum^m_{k=1} \frac{{\left( \frac{{\partial f}}{\partial x_{k}}\Delta x_{k} \right)^4}}{v_{k}}}
```


## [[#Kurzanleitung|Kurzanleitung]]

```latex
\large

	v_{eff}=\frac{(\Delta y)^4}{\sum^m_{k=1} \frac{{\left( \frac{{\partial f}}{\partial x_{k}}\Delta x_{k} \right)^4}}{v_{k}}}
```


## [[#Gegenkopplung|Gegenkopplung]]

```latex
\begin{array}{c c}
	U_{d}=0 & I_{+}=I_{-}=0
	\end{array}
```


## [[#Transimpedanzverstärker|Transimpedanzverstärker]]

```latex
U_{a}=-I\cdot R_{F}

U_{a}=U_{e}=0
```


## [[#Invertierender Verstärker|Invertierender Verstärker]]

```latex
A=\frac{U_{a}}{U_{e}}=\frac{R_{F}}{R_{G}}
```
