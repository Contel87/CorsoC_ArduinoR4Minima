void setup() {
  Serial.begin(9600);
  delay(2000);

/*Esempio 1 stampare un valore di una matrice*/
  int matr[3][4];
  matr[0][0] = 12;
  Serial.println(matr[0][0]);

/*Esempio 2 stampare l'intera matrice*/

int matrice[3][4] = {
   {0,0,0,0},
   {0,0,0,0},
   {0,0,0,0}
};
//--------------Inizializzo la matrice impostando tutte le celle a 0---------
for(int riga = 0; riga < 3; riga++){
  for(int colonna = 0; colonna < 4; colonna++){
    matrice [riga][colonna] = 0;
  }
}

//--------Stampo la matrice--------------
for(int r=0; r < 3; r++){
  for(int c = 0; c < 4; c++){
    Serial.print(matrice[r][c]);
  }
    Serial.println(); //vado a capo dopo ogni riga
}


}

void loop() {
  // put your main code here, to run repeatedly:

}
