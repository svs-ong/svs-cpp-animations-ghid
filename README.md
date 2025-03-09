🌟 **🌟 Cum funcționează animația din `Animation_Functions.cpp` - Ghid Pas cu Pas**  🌟

În acest ghid, îți voi explica pas cu pas cum funcționează animația din codul `Animation_Functions.cpp`, folosind emojiuri și exemple clare. 🕹️🎬
Dacă vrei să testezi codul pe loc, poți folosi acest [compiler online](https://www.onlinegdb.com/online_c++_compiler)  pentru a-l rula!


---


**Pasul 1: Curățarea Ecranului 🧹** 
 
- **Ce se întâmplă?**  Programul începe prin **ștergerea ecranului**  pentru a crea iluzia unei animații curate și continue.
 
- **Cum funcționează?**  Dacă ești pe **Windows** , folosește comanda `cls`, iar pe alte sisteme (Linux/macOS), folosește `clear`. Aceasta este esențială pentru a nu lăsa elemente vechi pe ecran și a face animația să pară netedă. 🧼🖥️
 
- **De ce este important?**  Fără această curățare, animatia ar avea mai multe imagini suprapuse și ar deveni dificil de urmărit. 🧹



---


**Pasul 2: Pauza între Cadre ⏳** 
 
- **Ce se întâmplă?**  Programul face o pauză de **50 milisecunde**  între fiecare pas al animației.
 
- **Cum funcționează?**  Folosind funcția `std::this_thread::sleep_for(chrono::milliseconds(sleepTime));`, programul așteaptă 50 milisecunde între fiecare cadru pentru a face mișcarea vizibilă și fluidă. 😴⏰
 
- **De ce este important?**  Fără acest delay, animația s-ar mișca mult prea rapid și nu ai putea observa pașii ei. 🕰️💤



---


**Pasul 3: Construirea Animației 🔄** 
 
- **Ce se întâmplă?**  Programul afișează pe rând simboluri pe ecran, care se schimbă după fiecare pauză, creând un efect de mișcare.
 
- **Cum funcționează?**  De exemplu, se afișează simbolul `"-"`, apoi `"--"`, și tot așa, până când animatia se dezvoltă complet. Fiecare pas este urmat de o pauză, iar ecranul este curățat, pentru a face loc pentru următorul simbol. 🔁🎨
 
- **De ce este important?**  Aceasta este baza animației, pentru că fiecare cadru al animației este schimbat rapid pentru a da impresia unei mișcări fluide. 📽️✨



---


**Pasul 4: Animația Continuă 🔁** 
 
- **Ce se întâmplă?**  Bucla `while(true)` din `main()` face ca animația să ruleze **la nesfârșit** .
 
- **Cum funcționează?**  Bucla infinită permite ca secvența de animație să se repete continuu, dând impresia că animația nu se oprește niciodată. 🎠🔄
 
- **De ce este important?**  Fără această buclă, animația s-ar opri după un singur ciclu. Bucla infinită asigură că animația continuă mereu. 🎢



---


**Pasul 5: Iluzia de Mișcare 🌀** 
 
- **Cum se creează animația?**  Fiecare cadru durează 50 de milisecunde, iar ecranul este șters și înlocuit rapid cu următorul cadru. Aceste schimbări rapide dau impresia unei mișcări continue.
 
- **De ce funcționează?**  Creăm iluzia de **mișcare continuă**  prin schimbarea rapidă a cadrelor și curățarea ecranului. Este ca și cum ai pune mai multe imagini în succesiune rapidă pentru a forma un film! 🎞️✨



---

🌟 **Cum funcționează animația din `Hot_Air_Baloon.cpp` - Pas cu Pas**  🌟

În acest ghid, îți voi explica cum funcționează animația într-un mod concis și ușor de înțeles. 🕹️🎬



---


**Pasul 1: Curățarea Ecranului 🧹** 
 
- **Ce se întâmplă?**  Curăță ecranul terminalului înainte de fiecare cadru nou.
 
- **Cum?**  Folosește `cls` pe Windows și `clear` pe alte sisteme. 🖥️



---


**Pasul 2: Adăugarea unui Delay ⏳** 
 
- **Ce se întâmplă?**  Se adaugă o pauză de 150ms între fiecare cadru.
 
- **Cum?**  Folosește `std::this_thread::sleep_for()` pentru a opri execuția. ⏰



---


**Pasul 3: Afișarea Animației 🔄** 
 
- **Ce se întâmplă?**  Se afișează figura (`______`, `/ \`, etc.) cu spații deasupra și dedesubt pentru a o muta.
 
- **Cum?**  Se face un loop cu un contor care ajustează poziția verticală a figurii. 🔢



---


**Pasul 4: Bucla Infinită 🔁** 
 
- **Ce se întâmplă?**  `while (true)` menține animația în execuție continuu.
 
- **Cum?**  Se rulează continuu funcția `loop()` pentru a repeta animația. 🔄


