---
publish: true
tags: [grundlagen, HAP_1]
aliases: []
---

# Basis

Jedes Stellenwertsystem hat eine Basis $b$. Der Wertebereich der Ziffern liegt im Bereich $0\dots b-1$. Die Wertigkeit $w_{i}$ an der Stelle $i$ beträgt $b^i$.

Für eine Zahl mit $n$ Stellen in einem Stellenwertsystem zur Basis $b$ liegt der Wertebereich im Bereich $0 \dots b^n-1$. D.h., es können $b^n$ verschiedene Werte dargestellt werden.

> [!NOTE] Falls eine Ziffer größer als 9 ist, wird standardmäßig mit Großbuchstaben weitergemacht, also 8, 9, A, B, C…

## Typische Stellenwertsysteme

| Name              | Basis | Ziffernvorrat            |
| ----------------- | ----- | ------------------------ |
| Dezimalsystem     | 10    | $0\dots 9$               |
| Binäsystem        | 2     | $0,1$                    |
| Hexadezimalsystem | 16    | $0\dots F \space (0-15)$ |
| Oktalsystem       | 8     | $0\dots 7$               |

## Notation

Da verschiedene Zahlen in verschiedenen Stellenwertsystemen gleich aussehen können, gibt man die Index als tiefgestelltem Index hinter der Ziffernfolge an.

| System            | Schreibweise   | im Dezimalsystem  |
| ----------------- | -------------- | ----------------- |
| Dezimal           | $1001011_{10}$ |                   |
| Binär             | $1001011_{2}$  | $75_{10}$         |
| Hexadezimalsystem | $1001011_{16}$ | $16.781.329_{10}$ |
| Oktalsystem       | $1001011_{8}$  | $262.665_{8}$     |

Außerdem haben sich `0x` und `0b` als Präfixe für Hexadezimal- bzw. Binärzahlen etabliert.
$$
	\begin{array}{r l }
	0\text{b}1001011&=75_{10} \\
	0\text{x}1001011&=16.781.329_{10}
	\end{array}
$$

In seltenen Fällen kann man auch den Präfix `0` für Oktalzahlen (z.B. in C) finden, siehe [hier](https://en.wikipedia.org/wiki/Octal#:~:text=In%20programming%20languages%2C%20octal,octal%20numbers%20as%20well.).
