/*---Allocazione dinamica-Creare delle strutture in memoria su misura (Array dinamico)--
Le funzioni che servono per gestire la memoria dinamicamente sono 4:
MALLOC: Permette di riservare un certo numero di byte in memoria che poi andranno assegnati
ad un puntatore;
CALLOC: variante di malloc che definisce già il numero massimo e la dimensione delle celle da 
utilizzare e azzera tutti i campi di memoria prima dell'utilizzo;
REALLOC: modifica la quantità massima di memoria impostata inizialmente da malloc,
prende il puntatore creato da malloc e gli assegna una nuova dimensine;
FREE: libera la memoria utilizzata.
*/
int num_el = 0;

void setup() {
  Serial.begin(9600);
  delay(2000);


  
  Serial.println("Quanti numeri interi vuoi usare?");
  
}

void loop() {
  while(Serial.available()){
    num_el = Serial.parseInt();
  Serial.println("Hai richiesto: ");Serial.print(num_el);Serial.println(" interi");

  int *ptr;
  /*Es. con Malloc*/
 ptr = (int *) malloc(num_el * sizeof(int)); // (int *) è un typecast di un puntatore generico a un array dinamico di interi

/*Es. con Calloc*/
// ptr = (int *) calloc(num_el, sizeof(int)); // Calloc


/*Se la memoria richiesta non è disponibile blocco il programma*/
if(ptr == NULL){
  Serial.println("Memoria non disponibile");
  for(;;){}
}

for (int i=0; i<num_el; i++){
  *(ptr+i) = i; //metto nelle celle del puntatore i valori di i
}
for (int i=0; i<num_el; i++){
  Serial.print(*(ptr+i));Serial.print(" "); //metto nelle celle del puntatore i valori di i
}
Serial.println();

/*--Se si vuole cambiare la dimensione della memoria con Realloc*/
//ptr = (int *)realloc(ptr, nuova dimensione da allocare a ptr); // Realloc
free(ptr);
}
}
