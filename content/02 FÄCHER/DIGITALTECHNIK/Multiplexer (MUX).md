---
publish: true
tags: [HAP_1]
aliases: [Multiplexer, MUX, Demultiplexer, DEMUX, TDMA, Decoder]
---

# Multiplexer

Ein Multiplexer ist ein Gerät mit $n$ Eingängen $I_{0},I_{1}\dots I_{n}$, welche über $k=\log_{2}n$ Sektionseingänge $x_{0}, x_{1}\dots x_{k-1}$ $n$ verschiedene Kanäle steuern kann. Dabei kann immer nur ein Kanal leiten. Das Aktivierungssignal $En$ (Enable) schaltet den Eingang auf den Ausgang sobald $En=0$.

## Wahrheitstabelle

| $\overline{En}$ | $x_{2},x_{1},x_{0}$ | $y$     |
| --------------- | ------------------- | ------- |
| 1               | xxx                 | 0       |
| 0               | 000                 | $I_{0}$ |
| 0               | 001                 | $I_{1}$ |
| 0               | 010                 | $I_{2}$ |
| 0               | 011                 | $I_{3}$ |
| 0               | 100                 | $I_{4}$ |
| 0               | 101                 | $I_{5}$ |
| 0               | 110                 | $I_{6}$ |
| 0               | 111                 | $I_{7}$ |

## Aufbau

![[02 FÄCHER/DIGITALTECHNIK/attachments/Multiplexer (MUX)/file-20260505163825321.png]]

## Schaltzeichen

![[02 FÄCHER/DIGITALTECHNIK/attachments/Multiplexer (MUX)/file-20260505163847179.png]]

## 2-Kanal-MUX

$$
y=(I_{0}\cdot \overline{S})+(I_{1}\cdot S)
$$

# Demultiplexer

Ein Multiplexer schaltet einen Eingang $d$ auf einen von $n$ Ausgängen $y_{i}$ mithilfe von $k$ Selektionseingängen $x_{0},x_{1},\dots,x_{k_{-1}}$. Dabei gilt $n=2^k$. Das Aktivierungssignal $En$ (Enable) schaltet den Eingang auf den Ausgang sobald $En=0$. Der Demultiplexer bildet das Gegenstück zum Multiplexer.

## Wahrheitstabelle

| $\overline{En}$ | $x_{2}x_{1}x_{0}$ | $y_{7}\dots y_{0}$ |
| --------------- | ----------------- | ------------------ |
| 0               | xxx               | 00000000           |
| 1               | 000               | 0000000**d**       |
| 1               | 001               | 000000**d**0       |
| 1               | 010               | 00000**d**00       |
| 1               | 011               | 0000**d**000       |
| 1               | 100               | 000**d**0000       |
| 1               | 101               | 00**d**00000       |
| 1               | 110               | 0**d**000000       |
| 1               | 111               | **d**0000000       |

## Aufbau

![[02 FÄCHER/DIGITALTECHNIK/attachments/Multiplexer (MUX)/file-20260505164936699.png]]

# Zeitmultiplex-Übertragung (TDMA)

Das Time Division Multiple Access ist das Prinzip, einen passenden Multiplexer und Demultiplexer zusammenzuschließen und jedem "Kanal" ein Zeitfenster zuzuweisen. Somit kann man z.T. viel Leitung sparen.

![[02 FÄCHER/DIGITALTECHNIK/attachments/Multiplexer (MUX)/file-20260505165342423.png]]

# Decoder

Ein Decoder schaltet einen von $n$ Ausgängen auf 1. Man kann ihn sich wie einen [[#Demultiplexer]] vorstellen, bei dem $d$ auf 1 geschaltet wird.

Die Wahrheitstabelle und der Aufbau eines Decoders sind daher dem Demultiplexer sehr ähnlich.

# Funktionsbündel

---

# Quellen

- [DGTL Vorlesung Funktionsbloecke (P. Hasselbach)](https://elearning.dhbw-ravensburg.de/pluginfile.php/444153/mod_resource/content/1/Digitaltechnik%20-%20Modul%205%20-%20Funktionsbl%C3%B6cke.pdf)
