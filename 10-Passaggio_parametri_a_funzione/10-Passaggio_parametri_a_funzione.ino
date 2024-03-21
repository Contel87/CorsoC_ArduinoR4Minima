void setup() {
  Serial.begin(9600);
  delay(2000);

  int n = 3;
  int m = 5;

  
  Serial.print("Valore originale di n: ");Serial.println(n);
  Serial.print("Valore originale di m: ");Serial.println(m);
  // Passando le variabili per valore, la funzione scambia una copia dei valori ma non gli originali
  scambia(n, m);
  // Infatti stampandoli subito dopo i valori n e m non sono cambiati
Serial.print("Valore di n cambiato per valore: ");Serial.println(n);
Serial.print("Valore di m cambiato per valore: ");Serial.println(m);
// Passando le variabili per indirizzo, la funzione scambia i valori originali
scambia2(&n, &m);
Serial.print("Valore finale di n: ");Serial.println(n);
Serial.print("Valore finale di m: ");Serial.println(m);

}

void loop() {
}

/*Scambio per valori*/
void scambia (int a, int b){
  int t = a;
  a = b;
  b = t;
Serial.print("Valore di n cambiato per valore: ");Serial.println(a);
Serial.print("Valore di m cambiato per valore: ");Serial.println(b);
}

/*Scambio per indirizzo*/
void scambia2 (int *a, int *b){
int t = *a;
*a = *b;
*b = t;
Serial.print("Valore di n cambiato per indirizzo: ");Serial.println(*a);
Serial.print("Valore di m cambiato per indirizzo: ");Serial.println(*b);

}