---
publish: true
tags: [integral]
aliases: []
---

Uneigentliche Integrale sind Integrale, deren Grenzen oder Integranden gegen unendlich gehen.

# Eine Grenze $\to \infty$

1. $\int_{a}^\infty f(x)dx$ ersetzen durch
   $$
	I(\lambda)=\int_{a}^\lambda f(x)dx
   $$
   
2. $I(x)$ bestimmen
3. Grenzwert bilden
   $$
	\int_{0}^\infty f(x)dx=\lim_{ \lambda \to \infty } I(\lambda)
   $$

# Integrand $\to \infty$

Wenn der Integrand gegen unendlich geht, kann man es in zwei Teile aufteilen, die alleine nach unendlich gehen.

$$
	\int_{a}^b f(x) dx = \int_{a}^{x_{0}}f(x)dx+\int_{x_{0}}^b f(x)dx
$$

# Test auf Konvergenz

Im Integral $[a,b]$ sei $0\leq f(x)\leq g(x)$. Dann gilt:

$$
	\int_{a}^b g(x)dx \text{  konvergiert}\implies \int_{a}^b f(x)dx \text{  konvergiert}
$$
$$
	\int_{a}^b f(x)dx \text{  divergiert}\implies \int_{a}^b g(x)dx \text{  divergiert}
$$

Man kann es sich so vorstellen, dass $f(x)$ immer unter oder genau auf $g(x)$ läuft. Wenn $f(x)$ also gegen unendlich geht, dann muss $g(x)$ auch gegen unendlich gehen. Wenn $g(x)$ gegen eine Konstante geht, dann muss $f(x)$ auch gegen eine Konstante gehen.

Das macht manche Lösungen einfacher (v.a. bei divergierenden Funktionen)

$$
	\int_{a}^\infty x^2dx=\infty\implies \int_{a}^\infty x^2+x+\frac{1}{x}=\infty
$$

# Beide Grenzen $\to \infty$

1. Integral ersetzen:
   $$
	I(\lambda,\mu)=\int_{\mu}^\lambda f(x)dx
   $$
2. Integral mit $\lambda$ und $\mu$ als Parameter lösen
   $$
	\int_{\mu}^\lambda f(x)dx=F(\lambda)-F(\mu)
   $$
3. Grenzwerte bilden
   $$
    \int_{-\infty}^\infty f(x)dx=\lim_{ \lambda \to \infty } F(\lambda)-\lim_{ \mu \to -\infty } F(\mu)
   $$

Dafür müssen beide Grenzwerte existieren, z.b. $f(x)=\sqrt{ x }; x \in \mathbb{R}$ würde nicht funktionieren.

---

# Quellen

- [MA Vorlesungsblatt 10 (A. Wipfler, 2025)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_10.pdf)

---

# LaTeX Summary

## [[#Eine Grenze $\to \infty$|Eine Grenze $\to \infty$]]

```latex
I(\lambda)=\int_{a}^\lambda f(x)dx

\int_{0}^\infty f(x)dx=\lim_{ \lambda \to \infty } I(\lambda)
```

## [[#Integrand $\to \infty$|Integrand $\to \infty$]]

```latex
\int_{a}^b f(x) dx = \int_{a}^{x_{0}}f(x)dx+\int_{x_{0}}^b f(x)dx
```

## [[#Test auf Konvergenz|Test auf Konvergenz]]

```latex
\int_{a}^b g(x)dx \text{  konvergiert}\implies \int_{a}^b f(x)dx \text{  konvergiert}

\int_{a}^b f(x)dx \text{  divergiert}\implies \int_{a}^b g(x)dx \text{  divergiert}
```

## [[#Beide Grenzen $\to \infty$|Beide Grenzen $\to \infty$]]

```latex
I(\lambda,\mu)=\int_{\mu}^\lambda f(x)dx

\int_{\mu}^\lambda f(x)dx=F(\lambda)-F(\mu)

\int_{-\infty}^\infty f(x)dx=\lim_{ \lambda \to \infty } F(\lambda)-\lim_{ \mu \to -\infty } F(\mu)
```
