---
publish: true
tags: []
aliases: []
---

# Addierer

## Halbaddierer

Ein Halbaddierer besitzt keinen Carry-Eingang.

$$
A, B:\text{Die beiden Bits, die addiert werden sollen}
$$

$$
S:\text{Summe}
$$

$$
C:\text{Carry-Ausgang}
$$

### Formel

$$
S=A \text{ xor }B = (\neg A \cdot B )+(A\cdot \neg B)=(\overline{A}\cap B)\cup(A\cap \overline{B})
$$

$$
C=A\cdot B=A\cap B
$$

### Wahrheitstabelle

| A   | B   |     | S   | C   |
| --- | --- | --- | --- | --- |
| 0   | 0   |     | 0   | 0   |
| 0   | 1   |     | 1   | 0   |
| 1   | 0   |     | 1   | 0   |
| 1   | 1   |     | 0   | 1   |

### Aufbau

![[Pasted image 20260421154503.png]]

### Schaltsymbol

![[Pasted image 20260421154719.png]]

## Vollbitaddierer

Ein Vollbitaddierer besitzt einen Carry-Eingang und -Ausgang.

### Formel

$$
S_{add}(A,B):\text{Halbaddierer Ausgang S}
$$

$$
S=S_{add}(S_{add}(A, B), C_{in})==((\neg A \cdot B )+(A\cdot \neg B) )
$$

$$
C_{add}(A, B):\text{Halbaddierer Ausgang C}
$$

### Wahrheitstabelle

| C_in | A   | B   |     | S   | C_out |
| ---- | --- | --- | --- | --- | ----- |
| 0    | 0   | 0   |     | 0   | 0     |
| 0    | 0   | 1   |     | 1   | 0     |
| 0    | 1   | 0   |     | 1   | 0     |
| 0    | 1   | 1   |     | 0   | 1     |
| 1    | 0   | 0   |     | 1   | 0     |
| 1    | 0   | 1   |     | 0   | 1     |
| 1    | 1   | 0   |     | 0   | 1     |
| 1    | 1   | 1   |     | 1   | 1     |

### Aufbau

![[Pasted image 20260421154550.png]]

# Subtrahierer

# Kombination
