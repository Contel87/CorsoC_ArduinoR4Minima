struct point {
int x;
int y;
};
struct point A, B; // Creo 2 strutture A e B


void setup() {
  Serial.begin(9600);
  delay(2000);

/*---Esempio 1 inizializzo direttamente le variabili della struttura---*/
A.x = 11;
A.y = 22;
prnt(A);// stampo direttamente le le variabili che ho dichiarato
  
  /*---Esempio 2 la struttura B non la dichiaro percio' gli assegno i valori con il puntatore *P (se non uso i puntatori, i valori originali NON cambiano) 
  ATTENZIONE!!!!!!! se si dovessero assegnare i valori con una funzione senza usare i puntatori i valori originali non vengono cambiati ma viene creata una copia*/
  setvalue(&B);
  stamp(B);

}

void loop() {
  // put your main code here, to run repeatedly:

}


void prnt (struct point P){
  char output[50];
  sprintf(output, "A.x vale: %d e A.y vale: %d", P.x, P.y);
  Serial.println(output);
}

void setvalue(struct point *P){
  P->x = 10;
  P->y = 20;
}

void stamp( struct point P){
char output[50];
sprintf(output, "B.x vale: %d e B.y vale: %d", P.x, P.y);
Serial.println(output);
}

