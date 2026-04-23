---
publish: true
tags: []
aliases: []
---

Ein Multiplexer ist ein Gerät mit $n$ Eingängen $I_{0},I_{1}\dots I_{n}$, welche über $k=\log_{2}n$ Hilfseingänge $S_{0}, S_{1}\dots S_{k-1}$ $n$ verschiedene Kanäle steuern kann. Dabei kann immer nur ein Kanal leiten. Das Aktivierungssignal $En$ (Enable) schaltet den Eingang auf den Ausgang sobald $En=0$

# 2-Kanal-MUX

$$
y=(I_{0}\cdot \overline{S})+(I_{1}\cdot S)
$$
