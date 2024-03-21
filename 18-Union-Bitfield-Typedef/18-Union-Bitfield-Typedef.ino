
/*---Es.1 Una union è un modo differente per far vedere una certa porzione di memoria al programma*/
union mixed { //Contiene 4 posizioni
unsigned int n; //puo' essere visto sia come intero
unsigned char b[4]; // che come stringa di 4 char
};

/*--- Es.2 Bitfield tipo di struttura particolare che ci permette di definire dei campi da singolo bit---*/
struct reg { //Simula 8 bit di regolazione motore
unsigned DIR : 1; //il bit DIR occupa 1 posizione
unsigned ENA : 1;
unsigned STP : 1;
unsigned playload : 4;//playload occupa 4 bit
unsigned CRC : 1;
};

/*--Esempio 3 Typedef puo rinominare acluni tipi per chiamarli in altro modo---*/
typedef int intero;//Ogni volta che chiamo intero e' come se chiamassi int

void setup() {
  Serial.begin(9600);
  delay(2000);
//Es.1 stampato come 4 char
  union mixed a;
  a.n = 1234;
  Serial.print(a.b[3]);Serial.print(a.b[2]);Serial.print(a.b[1]);Serial.println(a.b[0]);

//Es.1 stampato come numero...posso definire direttamente i valori e stampare (B00000011 = intero 257)
a.b[0] = 0x01;
a.b[1] = 0x01;
a.b[2] = 0;
a.b[3] = 0;
stamp(a.n);

//Es.2 
struct reg driver;
driver.DIR = 0;
driver.ENA = 0;
driver.STP = 0;
driver.playload = B1111;
driver.CRC = 0;
Serial.print("Register driver: ");
Serial.print(driver.DIR, BIN);Serial.print(driver.ENA, BIN);Serial.print(driver.STP, BIN);Serial.print(driver.playload, BIN);Serial.println(driver.CRC, BIN);

/*---Es.3 Typedef---*/
intero numero; //intero e' alias di int
numero = 3;
Serial.print("numero: ");Serial.println(numero);

}

void loop() {
  // put your main code here, to run repeatedly:

}

// Es.1
void stamp(int i){
char outbuf[10];
sprintf(outbuf, "%d", i);
Serial.println(outbuf);
}

