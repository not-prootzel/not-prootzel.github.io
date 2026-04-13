---
publish: true
tags: []
aliases: []
add: true
---
$$\frac{d}{dx}=f'(x)$$
$$\int f(x) \space dx=F(x);\int^a_{b}f(x)\space dx=F(a)-F(b)$$
# Rechenregeln

| Name            | Eingang                 | Ausgang                                      |
| --------------- | ----------------------- | -------------------------------------------- |
| Produktregel    | $$f'(x)*g'(x)$$         | $$f'(x)*g(x)+f(x)*g'(x)$$                    |
| Quotientenregel | $$\frac{f'(x)}{g'(x)}$$ | $$\frac{{f'(x)*g(x)-f(x)*g'(x)}}{[g(x)]^2}$$ |
| Kettenregel     | $$f'(g'(x))$$           | $$f'(g(x))*g'(x)$$                           |

# Ableitungstabelle

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

| $$f'(x)$$            | $$f(x)$$       | $$F(x)$$    |
| -------------------- | -------------- | ----------- |
| $$n*e^x$$            | $$n*e^x$$      | $$n*e^x+C$$ |
| $$n*f'(x)*e^{f(x)}$$ | $$n*e^{f(x)}$$ |             |
| $$n*\frac{1}{x}$$    | $$n*\ln(x)$$   |             |