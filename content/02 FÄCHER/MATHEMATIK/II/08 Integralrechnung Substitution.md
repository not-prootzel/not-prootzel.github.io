---
publish: true
tags: [analysis, differenzial, integral]
aliases: []
---

# Umkehrung der Kettenregel

$$
	\frac{d}{dx}f(g(x))=f'(g(x))\cdot g'(x)
$$
$$
	\implies \int f'(g(x))\cdot g'(x)dx=f(g(x))+C
$$

# Substitution

Die Substitution erlaubt die Anwendung der umgekehrten Kettenregel in manchen Integralen. Sie lautet wie folgt:

1. Auffinden von $g(x)$ und $g'(x)$ im Integranden
2. Ersetzen $u=g(x)$
3. Umformen des Integrals, Bildung von
   $$
   	du=\frac{du}{dx}\cdot dx
   $$
4. Lösen des Integrals
5. Bei unbestimmten Integralen: Rücksubstitution $u=g(x)$

# Trigonometrische und hyperbolische Substitution

!TODO

---

# Quellen

- [Vorlesungsblatt 8 (A. Wipfler, 2026)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443802/mod_folder/content/0/Ma2_08.pdf)

---

# LaTeX Summary

## [[#Umkehrung der Kettenregel|Umkehrung der Kettenregel]]

```latex
\frac{d}{dx}f(g(x))=f'(g(x))\cdot g'(x)

\implies \int f'(g(x))\cdot g'(x)dx=f(g(x))+C
```

## [[#Substitution|Substitution]]

```latex
du=\frac{du}{dx}\cdot dx
```
