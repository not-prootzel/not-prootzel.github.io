---
publish: true
tags: []
aliases: []
---

# Beispiele

## 1-Bit Adder mit Carry (Volladdierer)

**Eingaben**:

	$x,y:$ Die Werte, die addiert werden sollen

	$c:$ Carry in

**Ausgaben**:

	$s_{out}:$ Ergebnis

	$c_{out}:$ Carry out

| c   | x   | y   |     | s_out | c_out |
| --- | --- | --- | --- | ----- | ----- |
| 0   | 0   | 0   |     | 0     | 0     |
| 0   | 0   | 1   |     | 1     | 0     |
| 0   | 1   | 0   |     | 1     | 0     |
| 0   | 1   | 1   |     | 0     | 1     |
| 1   | 0   | 0   |     | 1     | 0     |
| 1   | 0   | 1   |     | 0     | 1     |
| 1   | 1   | 0   |     | 0     | 1     |
| 1   | 1   | 1   |     | 1     | 1     |
