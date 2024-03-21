/* Funzione ricorsiva (che richiama se stessa), prevede tante chiamate della stessa funzione una dentro l'altra,
puo' essere rischiosa se non si prendono opportuni provvedimenti tra cui:
- Capire come avviene la chiamata ricorsiva (una funzione che chiama se stessa);
- Fissare sempre il punto di arrivo, altrimenti non si fermera' mai.
Un esempio e' il calcolo del fattoriale:
3! (Fattoriale 3) = 3 x 2 x 1; // 1 e' la condizione di termine che fa fermare la funzione
4! (Fattoriale di 4) = 4 x 3 x 2 x 1;
Spesso per non occupare tanta memoria si preferisce usare il modo iterattivo (con un ciclo for),
oppure ricorsivo.
*/


void setup() {
  Serial.begin(9600);
  delay(2000);
//f(0)_; //caso base
  f(5); // Modo ricorsivo (piu' elegante ma occupa piu' ram)
  Serial.println(" <-- Esempio di funzione ricorsiva");
  f1(5); // Modo iterattivo (consuma meno)
  Serial.println(" <-- Esempio di funzione iterattiva con ciclo for");

  //sr(1); caso base, restituisce 1
  int n = sr(1);
  Serial.println(n);

  //sr(3);// restituisce 1+2+3
  n = sr(3);
  Serial.println(n);

  
  

}

void loop() {
 
}

int f(int n){
  if(n<=0){// if per indicare il caso base e fermare tutto (n e' uguale zero)
  return 0;
  }else{ // Per il caso generico, la funzione si richiama fino ad arrivare al caso base (n=0)
  Serial.print(n);
  return f(n-1);
  }
}

int f1(int n){
  if(n<=0){
    return (0);
  }else{
   for (int i = n; i>0; i--){
   Serial.print(i);
  }
  }
}

// Esempio di somma ricorsiva
int sr(int n){
  if(n<=0){
    return 0;
  }else if(n==1){
    return 1;
  }else{
    return (n + sr(n-1));
  }

}
  

