/*---Esempio 1 etichetto i giorni della settimana come giorniw*/
enum giorniw{lun, mar, mer, gio, ven, sab, dom};// Attenzione! nella {} ci sono COSTANTI che partono da 0, non stringhe
enum mesi {gen=1, feb, marz};//Se voglio cominciare da 1 invece che da 0, basta eguagliare 1 alla prima costante

// Enum è un insieme di numeri, se li voglio trasformare in stringhe uso un array label con 7 posizioni con 10 caratteri ciascuna
char label[7][10] = {"lunedi", "mantedi", "mercoledi", "giovedi", "venerdi", "sabato", "domenica"};


void setup() {
  Serial.begin(9600);
  delay(2000);

/*---Se voglio lavorare con le etichette (label) associo i valori con == */
  enum giorniw dd;// Es.1 Creo una variabile che utilizza i valori giorniw
  dd==lun;
  if (dd==lun) Serial.println("lunedi'");

  /*---se voglio usare i valori delle enum come indice della string label...*/
  int gg = giorniw::mar;
  //Serial.print("gg: ");Serial.println(gg);
  Serial.println(label[dd]); // stampera' label[1] perchè char masi[1] e' martedi


/*Se voglio lavorare con i decimali, associo con :: (il primo valore vale sempre 0)*/
Serial.print("lun vale: ");Serial.println(giorniw::lun);
Serial.print("mar vale: ");Serial.println(giorniw::mar);Serial.println("Eccetera...");

enum mesi mm;
mm = mesi::gen; //Ho forzato gen = 1, perciò i valori partono da 1 invece che da 0
Serial.print("gen vale: ");Serial.println(mm);

///---Esempio con switch---
switch(dd){
case lun:
Serial.println ("E' lunedi");
break;
case mar:
Serial.println("E' martedi'");
break;



}



}





void loop() {
  // put your main code here, to run repeatedly:

}

/*
void stamp (int i){
char outbuf[50];
sprintf(outbuf, "mm vale: %d", i);
Serial.println(outbuf);
}
*/

