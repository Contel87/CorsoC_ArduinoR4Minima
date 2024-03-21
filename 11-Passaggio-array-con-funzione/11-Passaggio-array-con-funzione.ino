/* Le funzioni che lavorano con gli array di una funzione cambiano il valore originale della variabile sia se le variabili vengono chiamate per valore,
sia se vengono chiamate per puntatore (o per riferimento)!!!!!!!!
A differenza delle funzioni che lavorano sulle variabili che cambiano il valore originale solo se utilizzano i 
puntatori (solo lavorando per *riferimento)!!
*/


char m[10];
void setup() {
  Serial.begin(9600);
  delay(2000);
  int n[10];
// Inizializzo l'Array
clra(n);

  // Stampa array
  // La n originale viene modificata in ogni situazione, sia se lavoro con i valori, sia se lavoro con i *puntatori!!!!!!!!!!
  // Da notare che il nome dell'Array viene interpretato come indirizzo di partenza!!
  prta(n); 
  prta2(n);
  prta3(n);
  saluta("Mario");
  
}

void loop() {
  

}

// Funzione per inizializzare l'array
void clra(int n[]){
  for(int i = 0; i<10; i++) n[i] = 0;
}


//------------ Esempio 1  dare dimensioni ----------------
void prta(int n[10]){
  for (int i = 0; i < 10; i++){
    Serial.print(n[i]);Serial.print(" ");
  }
  Serial.println();
}

///------------>Esempio 2 non dare le dimensioni --------
void prta2(int n[]){
  for (int i = 0; i < 10; i++){
    Serial.print(n[i]);Serial.print(" ");
  }
  Serial.println();
}

//-----------Esempio 3 dare un puntatore all'array---------------
void prta3(int *n){
  for (int i = 0; i < 10; i++){
    Serial.print(n[i]);Serial.print(" ");
  }
  Serial.println();
}

void saluta (char nome[]){
char res[10] ; //Array to store result
sprintf(res,"Ciao %s", nome);
Serial.println(res);
//Serial.println(strlen(res));
}

