/**---Esempio 1 dichiaro una struttura di TIPO sensore*/
struct sensore {
char nome[20];
int led;
int temperatura;
}; // Da notare il punto e virgola dopo il blocco di codice

struct sensore s1; //Creo un istanza, dichiarando il NOME della variabile che prendera' il nome della struttura
struct sensore s2 = {"Sensore esterno", LOW, 0};// Posso anche assegnare direttamente dei valori


/*---Esempio 2, se ho solo una variabile da dichiarare, creo un istanza direttamente nella dichiarazione*/
struct addr {
  char nome[20];
  char cognome [20];
  int dd;
  int mm;
  int yy;

}indirizzo2; //Ecco la differenza!!!!

/*---Esempio 3 Assegnazione diretta delle variabili*/
struct addr3 {
  char nome[20];
  char cognome [20];
  int dd;
  int mm;
  int yy;

};


void setup() {
 Serial.begin(9600);
 while(!Serial){exit;}

/* Esempio 1*/ Serial.println("-------------Esempio 1------------");
s1.temperatura = analogRead(A0);
Serial.println(s1.temperatura); //Variabile s1

Serial.println(s2.nome);//Variabile s2
Serial.println(s2.led);
Serial.println(s2.temperatura);

/* Esempio 2*/ Serial.println("-------------Esempio 2------------");
strcpy(indirizzo2.nome, "Luigi");
strcpy(indirizzo2.cognome, "Conte");
indirizzo2.dd = 1;
indirizzo2.mm = 7;
indirizzo2.yy = 1987;
char dati[100];// Array da stampare con Serial.print
sprintf(dati, "%s %s, nato il %d/%d/%d",
       indirizzo2.nome,
       indirizzo2.cognome,
       indirizzo2.dd, indirizzo2.mm, indirizzo2.yy
       );Serial.println(dati);


/*--Esempio 3 assegnazione diretta*/ Serial.println("-------------Esempio 3------------");
struct addr3 indirizzo3 = {"Luigi", "Conte", 1,1,1987}; //Assegno direttamente le vatiabili
char outbuf[100];// Array da stampare con Serial.print
sprintf(outbuf, "%s %s, nato il %02d/%02d/%d",
       indirizzo3.nome,
       indirizzo3.cognome,
       indirizzo3.dd, indirizzo3.mm, indirizzo3.yy
       );Serial.println(outbuf);


/*Esempio 4 Array di strutture*/ Serial.println("-------------Esempio 4------------");

struct addr3 lista[10];//tipo addr3, nome lista con un array di 10 elementi
strcpy(lista[0].nome, "Paolo");
strcpy(lista[0].cognome, "Verdi");
lista[0].dd = 3;
lista[0].mm = 6;
lista[0].yy = 2012;
char outbuf1[100];// Array da stampare con Serial.print
sprintf(outbuf1, "%s %s, nato il %02d/%02d/%d",
       lista[0].nome,
       lista[0].cognome,
       lista[0].dd, lista[0].mm, lista[0].yy
       );Serial.println(outbuf1);

}





void loop() {
  

}
