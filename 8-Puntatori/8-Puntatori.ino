void setup() {
  Serial.begin(9600);
  delay(2000);
/*Esempio 1 puntatori*/
  int n = 123;
  int *p = &n;
  Serial.print("L'indirizzo di p e' ");Serial.println((unsigned long)p); //L'indirizzo di memoria occupa 4 byte
  Serial.print("Il valore di p e' ");Serial.println(*p);

  //-----Modifico il valore dentro l'indirizzo puntato da p (prima era 123)-----------
(*p) = 567;
Serial.print("L'indirizzo di p e' ");Serial.println((unsigned long)p);
Serial.print("Il valore di p e' ");Serial.println(*p);

//---Creo p2 che punta allo stesso indirizzo di p (il valore puntato da p e' lo stesso di quello puntato da p2)--
int *p2;
p2 = p;
Serial.print("L'indirizzo di p2 e' ");Serial.println((unsigned long)p2);
Serial.print("Il valore di p2 e' ");Serial.println(*p2);

/*Esempio 2 Puntatore ad Array (Aritmetrica dei puntatori)*/
int num[5] = {12,23,34,45,56};
int*pa = num; //per gli array e' valido sia &num che num!!
Serial.print("L'indirizzo di pa[0] e' ");Serial.println((unsigned long)pa); 
Serial.print("Il valore di pa[0] e' ");Serial.println(*pa);
  pa++;
Serial.print("L'indirizzo di pa[1] e' ");Serial.println((unsigned long)pa); 
Serial.print("Il valore di pa[1] e' ");Serial.println(*pa);
pa++;
Serial.print("L'indirizzo di pa[2] e' ");Serial.println((unsigned long)pa); 
Serial.print("Il valore di pa[2] e' ");Serial.println(*pa);






}

void loop() {
  // put your main code here, to run repeatedly:

}
