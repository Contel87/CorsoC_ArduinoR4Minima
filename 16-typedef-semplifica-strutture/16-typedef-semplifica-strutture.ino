

/* Struttura creata SENZA la definizione typedef
struct addr {
char via[20];
char citta[30];
int zip;
int numeri[10];
};
struct addr mio_indirizzo
*/



/*---Esempio 2 Creare strutture da usare dentro altre strutture---
ATTENZIONE, ho definito prima apt e poi addr altrimenti il compilatore non vede apt dentro addr*/

typedef struct _apt{ //apt puo essere ad es. un complesso di appartamenti
int interno;
}apt;

/*---Esempio 1 con typedef vado proprio a creare una struttura in modo da poterla chiamare
 direttamente senza anteporre il prefisso struct*/
typedef struct _addr { // ATTENZIONE a non dimenticare l'underscore davanti a _addr
char via[20];
char citta[30];
int zip;
int numeri[10];

apt appartamenti[10];//Esempio di una struttura dentro un altra struttura

}addr; //tipo addr



void setup() {
  Serial.begin(9600);
  delay(2000);

  addr indirizzo2;
  addr mio_indirizzo;
  
 indirizzo2.zip = 1234;
 indirizzo2.appartamenti[0].interno = 12;
}

void loop() {
  // put your main code here, to run repeatedly:

}
