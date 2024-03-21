/*---Variabile extern---*/
/* Per utilizzare una variabile dichiarata fuori dal blocco di codice in cui viene utilizzata si puo usare \
il modificatore di tipo extern. Va anteposto nel momento in cui viene dichiarata (NON quando viene inizializzata) per dire al compilatore di \
andarla a pescare fuori dal blocco di codice in cui siamo.
Esempio 1: inizializzare una variabile (y) nel file di intestazione e dichiararla ed usarla nel programma principale;
Esempio 2: inizializzare una variabile (x) nel file di implementazione e dichiararla ed usarla nel programma principale;
Esempio 3: utilizzare una funzione che utilizza una variabile esterna (inizializzata nel file di intestazione .h)
*/


#include "extern_var.h"


void setup() {
  Serial.begin(9600);
  delay(2000);

  /*---Esempio 1---*/
  extern int y; // il modificatore di tipo extern dice di adare a cercare il valore di y fuori dal blocco setup(){}
  Serial.println(y);

/*---Esempio 2---*/
  extern int x; // il modificatore di tipo extern dice di adare a cercare il valore di y fuori dal blocco setup(){}
  Serial.println(x);

/*---Esempio 3---*/
prt();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}