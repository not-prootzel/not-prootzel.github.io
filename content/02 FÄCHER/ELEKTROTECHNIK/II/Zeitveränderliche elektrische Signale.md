---
publish: true
tags: ["foliensatz_1"]
aliases: []
---

# Definitionen

## Zeitveränderliche Signale

Ein zeitveränderliches Signal ist eine Größe, dessen Augenblickswert sich über die Zeit ändert. Zeitabhängige Größen werden oft klein geschrieben ($U\implies u(t)$).

## Periodische Signale

Ein periodisches Signal sind Signale, deren Graphen sich nach einer Periodendaür $T$ wiederholen. Verläufe dürfen auf der y-Achse verschoben werden.

## Wechselgrößen

Wechselgrößen sind [[#Periodische Signale|periodische Signale]], deren zeitlicher Mittelwert 0 entspricht. Das heißt, die Fläche über und unter dem Graphen von $0$ bis $T$ sind jeweils gleich groß.

$$
	\int_{0}^{T}g(t)\space dt=0
$$

![[file-20260422124228069.png]]

### Harmonische Wechselgrößen (Wechselstrom)

Harmonische Wechselgrößen sind sinusoder cosinusförmige [[#Wechselgrößen]]. Da es eine (Co-)Sinuswelle ist und die Fläche über und unter dem Graphen gleich groß sein muss, kann es keine Verschiebung entlang der y-Achse geben.

Die meisten (idealen) Wechselspannungsbzw. Wechselstromqueellen sind harmonische Wechselgrößen.

# Kenngrößen

| Zeichen                                                          | Name                             | Bedeutung                                                              | Formel                                       |
| ---------------------------------------------------------------- | -------------------------------- | ---------------------------------------------------------------------- | -------------------------------------------- |
| $$T$$                                                            | Periodendauer                    | Die Dauer einer [[#Periodische Signale\|Periode]]                      | $$T=\frac{1}{f}$$                            |
| $$f$$                                                            | Frequenz                         | Die Anzahl an Perioden <br>in einer Sekunde                            | $$f=\frac{1}{T}$$                            |
| $$\omega$$                                                       | Kreisfrequenz                    | Der überstrichene <br>Phasenwinkel                                     | $$\omega=\frac{T}{2\pi}=2\pi f$$             |
| $$\phi_{u}$$                                                     | Anfangsphase                     | Die Verschiebung eines<br>periodischen Signales<br>entlang der x-Achse | $\phi_{u}>0$ =><br>nach rechts<br>verschoben |
| $$\hat{u}, \hat{\imath}, \hat{x}$$<br>auch $U_{0}, I_{0}, X_{0}$ | Amplitude von $u, i, x$          | Die Ausschwingung <br>eines Signals;<br>"Abstand zur x-Achse"          | $$\max{ (\left\vert U \right\vert) }$$       |
| $u_{ss}, i_{ss}, x_{ss}$                                         | Spitze-Spitze-Wert von $u, i, x$ |                                                                        |                                              |

**Definition und Periodizität:** Periodendauer (T), Frequenz (f) und Kreisfrequenz (ω).

**Signaleigenschaften:** Augenblickswert, Amplitude (Scheitelwert) und Spitze-Spitze-Wert.-

**Statistische Kennwerte:**

- Arithmetischer Mittelwert.
- **Effektivwert:** Definition und physikalische Bedeutung der Verlustleistung.Gleichrichtwert und Formfaktor.
- **Sonderformen:** Harmonische Schwingungen versus pulsförmige Signale.
