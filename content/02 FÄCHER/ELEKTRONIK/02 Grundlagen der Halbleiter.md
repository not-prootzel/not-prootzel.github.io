---
publish: true
---

# 2.1 Was sind Halbleiter?

## Kristallgitterstruktur und Valenzbindungen

Atome neigen dazu, einen möglichst stabilen Zustand zu erreichen. Bei Haltleitern ist das die [Edelgaskonfiguration](https://laborhelfer.de/oktettregel).

## Silizium

Silizium ist der bedeutendste Halbleiter. Es gehört zur IV-ten Hauptgruppe und hat somit 4 [Valenzelektronen](https://studyflix.de/chemie/valenzelektronen-2798). Außerdem hat es gleich viele Elektronen und Protonen und ist somit (auch in der Edelgaskonfiguration) elektrisch neutral.

## Andere Halbleiter

Germanium ($\ce{Ge}$) und Gallium-Arsenid ($\ce{Ga}\ce{As}$) werden auch als Halbleiter verwendet. Sie lassen sich öfter in der Hochfrequenztechnik finden, sind dafÜr aber teurer.

# 2.2 Energiebänder

## Valenzband, Leitungsband, verbotenes Band

Laut plank'scher Quantentheorie befinden sich befinden sich die Elektronen eines Halbleiters in sogenannten Energiebändern.

Die potentielle Energie eines Elektrons nimmt mit steigendem Abstand zum Atomkern zu (ähnlich wie die Schwerkraft).

Je nach potentieller Energie $W$ kann man also 3 Bänder erkennen:

- **Valenzband**
  Elektronen mit einer Energie $W\leq W_{v}$ sind fest ins Kristallgitter eingebaut
- **Leitungsband**
  Elektronen mit einer Energie $W\geq W_{L}$ befinden sich im Leitungsband und können sich frei im Kristallgitter bewegen
- **Verbotenes Band**
  Laut plank'scher Quantentheorie können sich hier keine Elektronen befinden

Die Energie, die nötig ist, um vom Valenzband ins Leitungsband zu kommen, heißt **Austrittsarbeit** $W_{G}$.

$$
W_{G}=W_{L}-W_{V}
$$

FÜr Silizium gilt $W_{G}=1,12eV$.

## Klassifizierung von Materialien

| Materialklasse | Merkmale der Bandstruktur                                 | Leitfähigkeit |
| -------------- | --------------------------------------------------------- | ------------- |
| Metalle        | kein verbotenes Band<br>Elektronen im Leitungsband bei 0K | Leiter        |
| Isolatoren     | Große Bandlücke $W_{G}$                                   | Nichtleiter   |
| Halbleiter     | Kleine Bandlücke $W_{G}$                                  | Halbleiter    |

## Temperaturabhängigkeit

Bei einer Temperatur $T=0K$ befinden sich alle Elektronen eines Halbleiters im Valenzband (=> nicht leitfähig).

Bei einer Temperaturerhöhung wird die Energie zufällig auf die Elektronen des Halbleiters übertragen. Manche erhalten dadurch genügend Energie, um $W_{G}$ zu überwinden und ins Leitungsband zu springen. Dadurch fehlt eine negative Ladung im Valenzband. Diese fehlende Ladung wird als **Loch** bezeichnet.

Je höher die Temperatur steigt, desto besser die Leitfähigkeit. Diese kann man durch die Dichte der freien Elektronen $n$ und Löcherdichte $p$ beschreiben:

$$
	T \uparrow \implies (n, p) \uparrow \implies \text{Leitfähigkeit} \uparrow
$$

# 2.3 Leitung von Halbleitern

Im Gegensatz zu Metallen gibt es in Halbleitern zwei Arten von Ladungen, die sich bewegen können:

1. **Elektronen**
   Freie Elektronen können sich wie in Metallen gewohnt bewegen
2. **Löcher**
   Löcher können sich auch "bewegen". Benachbarte Elektronen können sich in ein Loch bewegen und in ihrer ursprünglichen Position ein Loch hinterlassen, wodurch es sich effektiv bewegt. Zur Vereinfachung kann man sich Löcher als positive Ladungen vorstellen, die sich entgegengesetzt von Elektronen im Valenzband bewegen.

# 2.4 Dotierung

Unter der Dotierung versteht man die absichtliche Verunreinigung von Halbleitern. Dadurch kann man die Konzentration von einer der zwei [[#2.3 Leitung von Halbleitern|Ladungsträgerarten]] erhöhen.

## n-Dotierung

In der n-Dotierung werden **Donatoren** eingebracht. Das sind Elemente aus der IV. Hauptgruppe, d.h. Elemente mit einem Valenzelektron mehr (z.B. Phosphor).

Hier bleibt ein Valenzlektron übrig, das leicht vom Atomkern gelöst werden kann. Bei Phosphor bleibt der Halbleiter aber neutral geladen, da Phosphor auch ein Proton mehr hat.

## p-Dotierung

In der p-Dotierung werden **Akzeptoren** eingebracht. Das sind Elemente aus der III. Hauptgruppe, d.h. Elemente mit einem Valenzelektron **weniger** (z.B. Bor).

Hier ist ein Valenzelektron zu wenig vorhanden, um die eigentlichen 4 Bindungen für die [[#Kristallgitterstruktur und Valenzbindungen|Kristallgitterstruktur]] zu erreichen. Das bedeutet, es bleibt ein Loch. Trotz allem nimmt die Leitfähigkeit zu.

> [!NOTE] **n**-Dotierung = "**n**egativ", **p**-Dotierung = "**p**ositiv"

## Rekombination

Wenn ein Elektron ein Loch wieder besetzt, nennt man das eine **Rekombination**.

## Nomenklatur

Halbleiter, die eine p- oder n-Dotierung durchliefen, werden p-dotierte oder n-dotierte Halbleiter (kurz: n-Halbleiter und p-Halbleiter) genannt.

# 2.5 Der p-n-Übergang

Wenn ein p-Halbleiter und ein n-Halbleiter aufeinandertreffen, entsteht an der Kontaktstelle ein **p-n-Übergang**. Elektronen aus dem n-Halbleiter diffundieren (wandern) in den p-Halbleiter und [[#Rekombination|rekombinieren]]dort.

Durch das Abwandern der Ladungsträger bleiben ortsfeste, geladene Ionen zurück. Sie bilden die **Raumladungszone (RLZ)**. In der RLZ gibt es keine freien Ladungsträger.

Die getrennten Raumladungen erzeugen ein elektrisches Feld, das einer weiteren Diffusion entgegenwirkt. Die dabei entstehende Spannung heißt die **Diffusionsspannung $U_{D}$**.

# 2.6 Die Diode aus Halbleitersicht

Eine Halbleiterdiode nutzt die Eigenschaften des p-n-Übergangs, um den Stromfluss zu steuern.

Wenn man nun eine externe Spannung anlegt, hängt die Leitfähigkeit von der Spannungsrichtung ab.

Wenn eine **positive** Spannung am p-Halbleiter angelegt wird, werden Ladungsträger in die RLZ gedrückt. Dadurch nimmt die Breite der Raumladungszone ab. Sobald die sog. Schleusenspannung erreicht wird, beginnt die Diode zu leiten.

Wenn eine **negative** Spannung am p-Halbleiter angelegt wird, wird die RLZ breiter. Der Stromfluss wird unterbrochen.

## Die reale Diode

Im Gegensatz zu idealen Dioden haben reale Dioden innere Bahnwiderstände $R_{Bp}, R_{Bn}$ in jeweils dem p-Halbleiter und n-Halbleiter. Die Summe dieser ist der Bahnwiderstand $R_{B}$. Der Bahnwiderstand bestimmt bei großen Widerständen die Steigung der Diodenkennlinie.

# Quellen

- [Skript Elektronik 1 6-16](https://elearning.dhbw-ravensburg.de/pluginfile.php/441396/mod_resource/content/1/Skript_EK1.pdf#page=6)
- [Valenzelektronen (Studyflix)](https://studyflix.de/chemie/valenzelektronen-2798)
- [Oktettregel und Edelgaskonfiguration (Laborhelfer)](https://laborhelfer.de/oktettregel)

# KI-Nutzung

Google's [NotebookLM](https://notebooklm.google) hat mit dem Finden der Überschriften geholfen. Außerdem war es vor allem eine Hilfe bei den folgenden Überschriften:

- [[#Kristallgitterstruktur und Valenzbindungen]]
- [[#2.3 Leitung von Halbleitern]]
- [[#2.4 Dotierung]]
- [[#2.5 Der p-n-Übergang]]
- [[#2.6 Die Diode aus Halbleitersicht]]

Folgende Quellen hat es verwendet:

- [Skript Elektronik 1](https://elearning.dhbw-ravensburg.de/pluginfile.php/441396/mod_resource/content/1/Skript_EK1.pdf)

Alle Texte wurden von Menschen verfasst.
