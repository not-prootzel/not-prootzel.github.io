---
publish: true
tags: []
aliases: []
add: true
---
!TODO: überarbeiten
$$\frac{d}{dx}=f'(x)$$

$$\int f(x) \space dx=F(x);\int^a_{b}f(x)\space dx=F(a)-F(b)$$

# Rechenregeln

| Name            | Eingang                 | Ausgang                                                |
| --------------- | ----------------------- | ------------------------------------------------------ |
| Produktregel    | $$f'(x)\cdot g'(x)$$    | $$f'(x)\cdot g(x)+f(x)\cdot g'(x)$$                    |
| Quotientenregel | $$\frac{f'(x)}{g'(x)}$$ | $$\frac{{f'(x)\cdot g(x)-f(x)\cdot g'(x)}}{[g(x)]^2}$$ |
| Kettenregel     | $$f'(g'(x))$$           | $$f'(g(x))*g'(x)$$                                     |

# Ableitungstabelle

## Grundlegend

| $$f'(x)$$                   | $$f(x)$$       | $$F(x)$$                   |
| --------------------------- | -------------- | -------------------------- |
| $$0$$                       | $$n:konst.$$   | $$nx+C$$                   |
| $$n:konst$$                 | $$nx$$         | $$\frac{n}{2}x^2+C$$       |
| $$n*x^{n-1}$$               | $$x^n$$        | $$\frac{1}{n+1}x^{n+1}+C$$ |
| $$n*a^{g(x)}*\ln(a)*g'(x)$$ | $$n*a^{g(x)}$$ |                            |

<div class="page-break" style="page-break-before: always;"></div>

## Trigonometrie

| $$f'(x)$$              | $$f(x)$$   | $$F(x)$$    |
| ---------------------- | ---------- | ----------- |
| $$\cos x$$             | $$\sin x$$ | $$-\cos x$$ |
| $$-\sin x$$            | $$\cos x$$ | $$\sin x$$  |
| $$\frac{1}{\cos^2 x}$$ | $$\tan x$$ |             |
| $$-\frac{1}{\cos^2x}$$ | $$\cot x$$ |             |

## Exponentialfunktionen und Logarithmus

| $$f'(x)$$                      | $$f(x)$$            | $$F(x)$$         |
| ------------------------------ | ------------------- | ---------------- |
| $$n\cdot e^x$$                 | $$n\cdot e^x$$      | $$n\cdot e^x+C$$ |
| $$n\cdot f'(x)\cdot e^{f(x)}$$ | $$n\cdot e^{f(x)}$$ |                  |
| $$n\cdot\frac{1}{x}$$          | $$n\cdot\ln(x)$$    |                  |

## Umkehrfunktion

| $f'(x)$ | $f(x)$   | $F(x)$ |
| ------- | -------- | ------ |
| $g'(x)$ | $g(x)$   | $G(x)$ |
|         | $h(x)=1$ |        |

## Kurven in Parameterform

Gegeben ist eine Funktion $x=x(p);y=y(p)$ bzw.

$$\begin{rcases}
x=x(p) \\
y=y(p)
\end{rcases} 
\space p_{1}\leq p\leq p_{2}$$
Die Steigung einer Tagente an der Stelle $p$ dieser Funktion lautet dann $$f'(p)=\frac{y'(p)}{x'(p)}=\frac{dy}{dx}$$
