---
publish: true
tags: []
aliases: []
---

# 3.1 Definition und Kennlinie

Eine Diode lässt nur den Stromfluss in eine Richtung zu.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260429115758132.png]]

Die Anode ist der Anschluss am p-Halbleiter, die Kathode der Anschluss am n-Halbleiter.

Ströme und Spannungen werden meist in Durchlassrichtung definiert. In der Literatur und Datenblättern kann man oft anstelle von negativer Spannung aber zwei positive finden:

- $U_{F}$ für Spannung in Durchlassrichtung (forward)
- $u_{R}$ für Spannung gegen die Durchlassrichtung (reverse)

Auch wichtig ist der Sättigungsstrom $I_{S}$.

Die elektrischen Eigenschaften werden größtenteils vom p-n-Übergang beeinflusst. Die Kennlinie einer Diode ist nicht linear.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260429120454388.png]]

> [!WARNING] Der I. (Durchlassbereich) und III. (Sperrbereich)-Quadrant haben unterschiedliche Maßstäbe!

Laut Halbleitertheorie gilt das Shockley-Diodenmodell.

$$
	I_{F}=I_{S}\cdot (e^{\frac{U_E}{U_{T}}}-1)
$$

Für die Temperaturspannung $U_{T}$ gilt

$$
	U_{T}=\frac{k\cdot T}{q}
$$
$$
	k=1,38\cdot 10^{-23} \frac{VAs}{K} \space \text{(Boltzmannkonstante)}
$$
$$
	q=1,602\cdot 10^{-19} As \text{(Elementarladung)}
$$

Für eine Raumtemperatur von 300K (27C) ergibt sich

$$
	U_{T}(T=300K)=26mV
$$

Für die Modellierung realer Dioden wird der Emissionskoeffizient $m\approx 1,2$ definiert. Diese ist diodenabhängig, aber als gute Abschätzung von $m\cdot U_{T}$ (falls nichts gegeben ist) kann man verwenden:

$$
	m\cdot U_{T}(T=300K)=30mV
$$

In der Vorlesung etc. wird angenommen

$$
	U_{T}=m\cdot U_{T}(T=300K)=30mV
$$

# 3.2 Sperrspannung

Für eine unendlich große Sperrspannung $U_{Rinf}=\infty$ gilt

$$
	I_{F}=I_{S}\cdot(e^{-\infty}-1)=-I_{S}
$$
$$
	\lim_{ U \to \infty }I_{S}\cdot(e^{U/U_{T}}-1)=-I_{S} 
$$

Schon bei kleinen Sperrspannungen (100mV) gilt $I_{F}\approx -I_{S}$. Allerdings ist $I_{F}$ immer recht klein (pico- bis nanoamperes).

Allerdings fließen **Oberflächenleckströme**, die proportional zur Querschnittsfläche des p-n-Übergangs sind.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260429122504095.png]]

Daher verwendet man hier den im Datenblatt angegebenen Sperrstrom $I_{R}$ (reverse current). $I_{R}$ liegt in der Größenordnung von $1nA$ für Siliziumdioden ($1\mu A$ für Germaniumdioden). Solange die Sperrspannung nicht in der Nähe der **Durchbruchspannung $U_{BR}$** ist, kann man $I_{R}$ annähern durch

$$
	I_{R}\sim\sqrt{ u_{R} }
$$

In der Nähe der Durchbruchspannung (breakdown voltage) folgt der Stromverlauf einer exponentialen Funktion.

# 3.3 Durchlassbereich

Wenn man den Strom des Koordinatensystems logarithmisch aufzeichnet, erhält man näherungsweise eine Gerade für $I_{F}$. Diese Gerade beschreibt den **Durchlassbereich**.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260429123158047.png]]

Bei mittleren Spannungen lässt sich sagen:

$$
	I_{F}=I_{S}\cdot(e^{U_{F}/U_{T}}-1)\approx I_{S}\cdot e^{U_{F}/U_{T}}
$$

Damit lässt sich auch zeigen, dass der Anstieg exponentiell ist:

$$
	\frac{I_{F 2}}{I_{F 1}}=I_{S}\cdot e^{U_{F 2}/}
$$
Der Anfang des Durchlassbereichs liegt bei Silizium-Dioden bei ca. $0,6V$. Bei sehr hohen Strömen begrenzt der **Bahnwiderstand $R_{B}$** den Stromfluss.

# 3.4 Temperaturabhängigkeit

!TODO: Checken ob Formeln hier gebraucht werden

Die Diodenkennlinie ist temperaturabhängig. Bei einer Temperaturerhöhung verschiebt sich diese um $-1,7 \frac{mV}{K}$. Als Abschätzung wird gerne $2 \frac{mV}{K}$ verwendet.

Für $I_{F}$ gilt
$$
	\frac{\Delta I_{F}}{I_{F}}=e^{\Delta U_{F}/U_{T}}-1
$$
bzw.
$$
	\large \Delta I_{F}=I_{F}\cdot(e^{5.\overline{6}\%\cdot\Delta T/K}-1)
$$

Das bedeutet, dass Dioden nur einen stabilen Arbeitspunkt haben, wenn $I_{F}$ extern sichergestellt wird (z.B. durch eine Stromqülle).

# 3.5 Die "reale" Diode

Eine reale Diode hat einen gewissen Bahnwiderstand $R_{B}$, der sich aus dem Widerstand $R_{Bp}$ des p-Halbleiters und $R_{Bn}$ des n-Halbleiters zusammensetzt. Ihr Ersatzschaltbild ist daher ein Widerstand in Serie mit einer idealen Diode.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505092038104.png]]

Bei kleinen Strömen spielt $R_B$ kaum eine Rolle, bei großen allerdings schon.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505092230686.png]]

# 3.6 Ersatzschaltbilder für den Durchlassbereich

Häufig lassen sich die Effekte von Wechselspannung/-strom und Gleichspannung/-strom getrennt betrachten und anschließend addiert werden.

## 3.6.1 Gleichspannungsersatzschaltbild

Die Diode kann für Gleichstrombetrachtungen durch eine Spannungsquelle mit Innenwiderstand ersetzt werden. Oft reicht auch nur eine Spannungsquelle zur Annährung.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505093139541.png]]

Das Ersatzschaltbild gilt aber nur $I_{F}>0$ (Stromfluss in Durchlassrichtung). Ansonsten muss die Diode durch einen unendlich großen Widerstand ersetzt werden.

## 3.6.2 Wechselstromersatzschaltbild

Beim einem Wechselstrom ohne Gleichstromanteil wird die Diode die Hälfte der Zeit sperren. Daher wird davon ausgegangen, dass $\forall t \space I_{F}(t)>0$ ($I_{F}$ bleibt immer positiv).

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505095152882.png]]

Damit kann man den differentiellen Widerstand $r_{D}$ ausrechnen und das Ersatzschaltbild bilden:

$$
	r_{D}=R_{B}+\frac{U_{T}}{I_{F}}
$$

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505095309777.png]]

Bei kleinen Strömen $I_{F}<1mA$ (oder falls $R_{B}$ nicht ausdrücklich erwähnt wird) kann der Bahnwiderstand vernachlässigt werden.
$$
	r_{D}\approx \frac{U_{T}}{I_{D}}
$$

# 3.7 Berechnung und Dimensionierung von Diodenschaltungen

## 3.7.1 Gleichstrom

1. Auffassen der Schaltung als Aufbau aus Spannungs- oder Stromquelle, Widerstand und Diode
   ![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505095637109.png]]
2. Bildung des Ersatzschaltbilds für die Diode
   ![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505095643829.png]]

Damit ergibt sich:

$$
	I_{D}=\frac{{U-U_{D}}}{R}
$$
Bei $U\gg U_{D}$ kann die Diode vernachlässigt werden:

$$
	I_{D}\approx \frac{U}{R}
$$

## 3.7.2 Wechselstrom

Der Ansatz ist das gleiche; falls eine Gleichstrom-/spannungsquelle vorhanden ist kann man das Superpositionsprinzip anwenden.

# 3.8 Anwendungsbeispiele für Dioden

## 3.8.1 Der Einweggleichrichter

Eine sinusförmige Spannungsquelle wird in einem Gleichrichter in eine rein positive/negative Spannung umgesetzt.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505100416073.png]]

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505100451071.png]]

Der Verlauf von $u_{R}$ kann (und wird im folgenden) annähernd als Sinuswelle dargestellt werden.

Der zeitliche Mittelwert von $u_{R}$ bzw. $i_{R}$ lautet
$$
	\large \overline{u}_{R}=\frac{\hat{u}_{R}}{\pi};\space\space \overline{i}_{R}=\frac{\hat{\imath}_{R}}{\pi}
$$
$\overline{u}_{R}$ entspricht der Spannung, die man erhält, wenn man $u_{R}$ unendlich stark mit einem Tiefpassfilter filtert. Dabei sind die Bereiche oben und unten zwischen $u_{R}$ und $\overline{u}_{R}$ gleich groß.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505100922512.png]]

Der Effektivwert von $u_{R}$ bzw. $i_{R}$ ist
$$
	u_{R\space eff}=\frac{\hat{u}_{R}}{2};\space\space i_{R\space eff}=\frac{\hat{\imath}_{R}}{2}
$$

## 3.8.2 Der Brückengleichrichter

![](https://i.ytimg.com/vi/9dtPEk73X9U/sddefault.jpg)

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505101745667.png]]

Der Brückengleichrichter erlaubt die Verwendung beider Halbwellen und macht beide positiv/negativ, anstelle eine Flussrichtung zu blockieren.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505101734643.png]]

Dabei ist die Amplitude $\hat{u}_{R}$ etwas kleiner als davor, da der Strom durch jeweils 2 Dioden fließt:

$$
	\hat{u}_{R}=\hat{u}-2U_{D}\approx \hat{u}-1,4V
$$

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260505101900170.png]]

Allerdings sind die durchschnittlichen Werte und die Effektivwerte höher:
$$
    \overline{u}_{R}=2\cdot \frac{\hat{u}_{R}}{\pi};\space\space \overline{i}_{R}=2\cdot \frac{\hat{\imath}_{R}}{\pi}
$$
$$
	u_{R\space eff}=\frac{\hat{u}_{R}}{\sqrt{ 2 }};\space \space i_{R\space eff}=\frac{\hat{\imath}_{R}}{\sqrt{ 2 }}
$$
**Vorteile des Brückengleichrichters**
- Die Frequenz der Ausgangsspannung ist doppelt so groß
  => geringerer Glättungsaufwand
- "ohmsche" Belastung der Quelle

**Nachteile des Brückengleichrichters**
- Abfall von 2 Diodenspannungen
  => höhere Verluste
- größerer Schaltungsaufwand durch 3 zusätzliche Dioden

