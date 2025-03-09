# SVS-Animation-Library

Folositi CodeBlocks sau acest compiler:
https://www.onlinegdb.com/online_c++_compiler

  Pentru codul din fisierul "Animation_Functions.cpp":
* functia clear_terminal() sterge output-ul din consola
* functia sleep_ms() produce un delay in milisecunde care este determinat de variabila sleepTime (50)
* functia loop() defineste un ciclu de animatie
  - un cadru de animatie dureaza atatea milisecunde cate au fost atribuite variabilei sleepTime dupa care output-ul este sters din consola
  - fiecare cadru afiseaza urmatorul pas al animatiei
* functia main() contine bucla while() care ruleaza la infinit datorita valorii true
  - aici se mentine ciclul de animatie care ruleaza la infinit, dand iluzia de animatie
