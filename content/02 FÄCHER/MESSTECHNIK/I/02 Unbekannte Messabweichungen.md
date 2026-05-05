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

# Verteilungsformen

## Normalverteilung

Die Normalverteilung ist eine der wichtigsten Wahrscheinlichkeitsverteilungen. Sie nimmt eine Glockenform an.

$$
	\large f(x)=\frac{1}{\sqrt{ 2\pi }\cdot \sigma}\cdot e^{-\frac{1}{2}(\frac{x-\mu}{\sigma})^2}
$$

![[02 FÄCHER/MESSTECHNIK/I/attachments/02 Unbekannte Messabweichungen/file-20260430110703701.png]]
