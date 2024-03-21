/*----Variabili statiche--------*/


void setup() {
  Serial.begin(9600);
  delay(2000);

  /*---Esempio 1 chiamando piu' volte la variabile (int n) ricevo sempre lo stesso valore---*/
  Serial.println("Esempio1");
  inc();
  inc();
  inc();

  /*---Esempio 2 chiamando la variabile (static int n)  il valore cambia!!!!!*/
 Serial.println("Esempio2");
  inc2();
  inc2();
  inc2();
}

void loop() {
  

}

void inc(){
int n = 0;
n++;
Serial.println(n);
}

void inc2(){
  static int n = 0;
  n++;
  Serial.println(n);
}