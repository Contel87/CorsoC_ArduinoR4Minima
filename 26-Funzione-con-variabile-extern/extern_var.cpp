/*---File di implementazione .cpp---*/



//#include "extern_var.h" //NON includere il file di intestazione nel file di implementazione .cpp perche' gia' fatto nel programma principale, pena errore del compilatore
#include <Arduino.h> // Senza chiamare Arduino.h non funziona il comando Serial.print()!!!

int x = 7; //l'inizializzazione NON deve essere specificata di tipo extern
int z = 87; //l'inizializzazione NON deve essere specificata di tipo extern

void prt(){
  extern int z;
  Serial.println(z);
  
}
