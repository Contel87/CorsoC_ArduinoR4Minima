/*--- Funzione fattoriale di tipo ricorsivo ---*/


void setup() {
  Serial.begin(9600);
  delay(2000);

  int n = fat(1);
  Serial.print(n);Serial.println(" <--- Fattoriale di 1 (caso base)");

  n = fat(3);
  Serial.print(n);Serial.println(" <--- Fattoriale di 3");

  n = fat(5);
  Serial.print(n);Serial.println(" <--- Fattoriale di 5");

}

void loop() {
  // put your main code here, to run repeatedly:

}

int fat(int n) {
  if (n == 1){ // caso base
    return 1;
  }else{
    return (n * fat(n - 1));
  }
}
