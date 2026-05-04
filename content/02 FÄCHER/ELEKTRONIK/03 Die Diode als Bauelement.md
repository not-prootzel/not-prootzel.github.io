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
- $U_{R}$ für Spannung gegen die Durchlassrichtung (reverse)

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
	I_{R}\sim\sqrt{ U_{R} }
$$

In der Nähe der Durchbruchspannung (breakdown voltage) folgt der Stromverlauf einer exponentialen Funktion.

# 3.3 Durchlassbereich

Wenn man den Strom des Koordinatensystems logarithmisch aufzeichnet, erhält man näherungsweise eine Gerade für $I_{F}$.

![[02 FÄCHER/ELEKTRONIK/attachments/03 Die Diode als Bauelement/file-20260429123158047.png]]

Bei mittleren Spannungen lässt sich also sagen:

$$
	I_{F}=I_{S}\cdot(e^{U_{F}/U_{T}}-1)\approx I_{S}\cdot e^{U_{F}/U_{T}}
$$

Damit lässt sich auch zeigen, dass der Anstieg exponentiell ist:

$$
	\frac{I_{F 2}}{I_{F 1}}=I_{S}\cdot e^{U_{F 2}/}
$$
