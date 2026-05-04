---
publish: true
tags: []
aliases: []
---

# Begriffe der Messtechnik

## Teile einer Messeinrichtung

| Begriff     | Bedeutung                                                                |
| ----------- | ------------------------------------------------------------------------ |
| Messen      | Bestimmung des wahren Wertes einer Messgröße                             |
| Sensor      | Umwandlung der physikalischen Messgröße in ein elektrisches Signal       |
| Messglieder | Umformung des Messsignals (Messverstärker, Analog-Digital-Wandler, etc.) |
| Ausgeber    | Anzeige oder Speicherung eines Messwertes                                |

## Kalibrieren, Justieren, Eichen

| Begriff     | Bedeutung                                                                                                                                                |
| ----------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Kalibrieren | Eindeutige Zuordnung des Ausgangssignals einer Messeinrichtung zu ihrem Eingangssignal. Darstellung in Tabelle, graphischer Kennlinie oder als Funktion. |
| Justieren   | Abgleichen der Messeinrichtung, sodass der ausgegebene Messwert möglichst wenig vom wahren Wert der Messgröße abweicht.                                  |
| Eichen      | *Amtliche* Prüfung (und Bescheinigung), dass ein Messgerät innerhalb spezifizierter Fehlergrenzen den richtigen Wert einer Messgröße anzeigt.            |

# Was ist Messtechnik?

## Rechtlicher Rahmen

- [Einheitenverordnung (1985)](https://www.gesetze-im-internet.de/einhv/BJNR022720985.html)
- [Mess- und Eichgesetz (2013)](https://www.gesetze-im-internet.de/messeg/BJNR272300013.html)
- [Mess- und Eichverordnung (2014)](https://www.gesetze-im-internet.de/messev/BJNR201100014.html)
- [Richtlinie 2014/32/EU (2014)](https://eur-lex.europa.eu/legal-content/EN/TXT/?uri=CELEX:32014L0032)
- [Richtlinie 80/181/EG (1979)](https://eur-lex.europa.eu/legal-content/EN/TXT/?uri=CELEX%3A01980L0181-20200613)
- [Einheiten- und Zeitgesetz (1969)](https://www.gesetze-im-internet.de/me_einhg/BJNR007090969.html)

# Größen und Einheiten

Physikalische Größen bestehen aus einem Zahlenwert und einer Einheit.

$$
	U=\{U\} |U|=5V
$$

$$U: \text{Größe};\space\{U\}: \text{Zahlenwert };\space |U|: \text{Einheit}$$

## SI-Grundeinheiten

Jede Einheit kann aus den sogenannten SI-Grundeinheiten geformt werden.

| Einheit   | definiert durch                                                                                                                                                                  |
| --------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Sekunde   | Hyperfeinübergang in Caesium-133 $v_{0}=9192631770 s^{-1}$                                                                                                                       |
| Meter     | Vakuumlichtgeschwindigkeit $c_{0}=299792458 \frac{m}{s}$                                                                                                                         |
| Kilogramm | Plaank'sche Wirkungsquantum $h=6, 62607015\cdot 10^{-34}Js$<br>$1J=1 \frac{{kg\cdot m^2}}{s^2}$                                                                                  |
| Ampere    | Elementarladung $e=1, 602176634\cdot 10^{-19}As$                                                                                                                                 |
| Kelvin    | Boltzmann-Konstante $k_{B}=1, 380649 \cdot 10^{-23} \frac{J}{K}$                                                                                                                 |
| Mol       | Avogadro-Konstante $N_{A}=6,02214076 \cdot 10^{23}\text{mol}^{-1}$                                                                                                               |
| Candela   | photometrische Strahlungsäquivalent für <br>Strahlung mit einer Frequenz von $540 \cdot 10^{12}Hz$<br>$K_{cd}=683 \frac{lm}{W}=683 \frac{{s^3 \cdot sr \cdot cd}}{kg \cdot m^2}$ |

## Dimensionen

Eine Dimension ist die Verallgemeinerung einer Größe ohne ihre Einheit.

| Name                    | Dimensionsbuchstabe |
| ----------------------- | ------------------- |
| Zeit                    | T                   |
| Länge                   | L                   |
| Masse                   | M                   |
| elektrische Stromstärke | I                   |
| Temperatur              | Θ                   |
| Stoffmenge              | N                   |
| Lichstärke              | J                   |

# Partielle Ableitung und totales Differenzial

Unter einer partiellen Ableitung versteht man die Ableitung einer Funktion $f(x,y)$, bei der entweder x oder y gleich einem konstanten Wert $c$ gesetzt wird.

Man kann es sich als Ableitung eines 2D-Querschnitts an $x=c$ bzw. $y=c$ einer Ebene vorstellen.

![[02 FÄCHER/MESSTECHNIK/I/attachments/01 Einführung, Messabweichungen/file-20260429131325603.png]]

Die partielle Ableitung einer Funktion $f$ nach $x$ lautet:

$$
	\frac{{\partial f}}{\partial x}=\lim_{ \Delta x \to 0 } \frac{{f(x+\Delta x, y)-f(x,y)}}{\Delta x}
$$

Für die Ableitung nach $y$ wird $x$ konstant gesetzt.

Bei mehrdimensionalen Ableitungen werden alle Variablen konstant gesetzt, außer die nach der abgeleitet wird.

## Totales Differenzial

Die Änderung der Tangentialebene in einem Arbeitspunkt einer zweidimensionalen Funktion $f(x,y)$ heißt **totales** oder **vollständiges Differenzial $\Delta f$**.

$$
	\Delta f=\frac{{\partial f}}{\partial x}\Delta x + \frac{{\partial f}}{\partial y} \Delta y
$$

![[02 FÄCHER/MESSTECHNIK/I/attachments/01 Einführung, Messabweichungen/file-20260429195142978.png]]

# Messabweichungen

Messergebnisse weichen meistens von dem eigentlichen Wert ab. Dabei unterscheidet man zwischen **bekannten** und **unbekannten** Einflüssen. Bekannte Einflüsse müssen korrigiert werden.

$$
	x_{korr}=x-\Delta x
$$

Bei der Berechnung/Messung weiterer Größen kann man $\Delta x$ durch ein totales Differenzial ersetzen.

# Quellen

- [MT Vorlesungsblatt 1 (A. Wipfler, 2025)](https://elearning.dhbw-ravensburg.de/pluginfile.php/443414/mod_resource/content/0/MT1_01.pdf)
