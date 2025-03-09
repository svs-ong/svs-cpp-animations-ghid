# 🌟  **Cum funcționează animația din `Animation_Functions.cpp` - Ghid Pas cu Pas**  🌟

În acest ghid, îți voi explica pas cu pas cum funcționează animația din codul `Animation_Functions.cpp`.
<br> <br>
<img src="https://github.com/svs-ong/SVS-Animation-Library/blob/main/GifMaker_20250309213125561.gif" width="10%" height="10%"/>

## **Pasul 0: Testarea Codului ✅** 

Pentru a începe, copiază codul din fișierul `Animation_Functions.cpp` și rulează-l în [compilatorul online](https://www.onlinegdb.com/online_c++_compiler) . Astfel, vei putea testa animația direct în browser! 🖥️✨


---


## **Pasul 1: Curățarea Ecranului 🧹** 
 
- **Ce se întâmplă?**  Programul începe prin **ștergerea ecranului**  pentru a crea iluzia unei animații curate și continue.
 
- **Cum funcționează?**  Dacă ești pe **Windows** , folosește comanda `cls`, iar pe alte sisteme (Linux/macOS), folosește `clear`. Aceasta este esențială pentru a nu lăsa elemente vechi pe ecran și a face animația să pară netedă. 🧼🖥️
 
- **De ce este important?**  Fără această curățare, animatia ar avea mai multe imagini suprapuse și ar deveni dificil de urmărit. 🧹



---


## **Pasul 2: Pauza între Cadre ⏳** 
 
- **Ce se întâmplă?**  Programul face o pauză de **50 milisecunde**  între fiecare pas al animației.
 
- **Cum funcționează?**  Folosind funcția `std::this_thread::sleep_for(chrono::milliseconds(sleepTime));`, programul așteaptă 50 milisecunde între fiecare cadru pentru a face mișcarea vizibilă și fluidă. 😴⏰
 
- **De ce este important?**  Fără acest delay, animația s-ar mișca mult prea rapid și nu ai putea observa pașii ei. 🕰️💤



---


## **Pasul 3: Construirea Animației 🔄** 
 
- **Ce se întâmplă?**  Programul afișează pe rând simboluri pe ecran, care se schimbă după fiecare pauză, creând un efect de mișcare.
 
- **Cum funcționează?**  De exemplu, se afișează simbolul `"-"`, apoi `"--"`, și tot așa, până când animatia se dezvoltă complet. Fiecare pas este urmat de o pauză, iar ecranul este curățat, pentru a face loc pentru următorul simbol. 🔁🎨
 
- **De ce este important?**  Aceasta este baza animației, pentru că fiecare cadru al animației este schimbat rapid pentru a da impresia unei mișcări fluide. 📽️✨



---


## **Pasul 4: Animația Continuă 🔁** 
 
- **Ce se întâmplă?**  Bucla `while(true)` din `main()` face ca animația să ruleze **la nesfârșit** .
 
- **Cum funcționează?**  Bucla infinită permite ca secvența de animație să se repete continuu, dând impresia că animația nu se oprește niciodată. 🎠🔄
 
- **De ce este important?**  Fără această buclă, animația s-ar opri după un singur ciclu. Bucla infinită asigură că animația continuă mereu. 🎢



---


## **Pasul 5: Iluzia de Mișcare 🌀** 
 
- **Cum se creează animația?**  Fiecare cadru durează 50 de milisecunde, iar ecranul este șters și înlocuit rapid cu următorul cadru. Aceste schimbări rapide dau impresia unei mișcări continue.
 
- **De ce funcționează?**  Creăm iluzia de **mișcare continuă**  prin schimbarea rapidă a cadrelor și curățarea ecranului. Este ca și cum ai pune mai multe imagini în succesiune rapidă pentru a forma un film! 🎞️✨



---
<br />
<br />
<br />

