# Arduino Skudår

introduction
hardware
opsætning
biblioteker
flowchart
diagrammer
tools
deployment
kontakt info


### Programmets intro:
Meningen med programmet er at finde ud af hvorfor et givent år er et skudår eller ej.

---
### Hardware:
Til dette projekt er der brugt en ATMega2560 samt en Atmel programmer (og 2 x 220 Ohm modstande + to lysdioder)

---
### Opsætning:
De to dioder er defineret til at grøn er på pin 5, og rød er på pin 7.
220 Ohm modstand mellem output pin og anoden på dioden.

---
### Flowchart:
```mermaid
graph
A[Find skudår]
A --> B(Modtag årstal)
B --> C{Er året deleligt med 4?}
C --> D[Nej]
D --> d[Ikke skudår]
C --> E[Ja]
E --> F{Er det deleligt med 100?}
G --> g{Er det deleligt med 400?}
F --> G[Ja]
F --> H[Nej]
H --> h[Det er skudår!]
g --> I[Ja]
I --> h
g --> J[Nej]
J --> d
```
---
### Tools:
- Microchip Studio 7 
- Arduino IDE

---
### Kontakt:
- Main developer
-- Jan Andreasen
-- jan@tved.it
---
