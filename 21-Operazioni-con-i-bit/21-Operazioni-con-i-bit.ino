/*---Operazioni con i bit:
- AND & (ampersand, e commerciale); 
- OR | (pipe, barra verticale); 
- XOR ^ (caret, caporale,apicino);  
- NEG ~ (tilde, bisciolina); 
- >> shift Right (tutti i bit a destra);
- << shift Left (Tutti i bit a sinistra).
*/

// Esempio con tabella della verita'
unsigned char A[4]={0, 1, 0, 1}; // Colonna destra
unsigned char B[4]={0, 0, 1, 1}; // Colonna sinistra
unsigned char O; // Store operation's result


void setup() {
  Serial.begin(9600);
  delay(2000);

  Serial.println("Tabella della verita AND (&)");
  for (int i=0; i<4; i++){
  O=A[i]&B[i];
  Serial.print(A[i]);Serial.print(B[i]);Serial.print("|");Serial.println(O);
  }

  Serial.println("Tabella della verita OR (|)");// Uno solo se c'e un 1
  for (int i=0; i<4; i++){
  O=A[i]|B[i];
  Serial.print(A[i]);Serial.print(B[i]);Serial.print("|");Serial.println(O);
  }

  Serial.println("Tabella della verita XOR (^)"); // Uno solo se sono diversi
  for (int i=0; i<4; i++){
  O=A[i]^B[i];
  Serial.print(A[i]);Serial.print(B[i]);Serial.print("|");Serial.println(O);
  }

//---Esempio di shift >> <<  ---
O=0x01;// 0000 0001
Serial.println(O);
O = O << 1;// 0000 0010
Serial.println(O);
O = O << 1;// 0000 0100
Serial.println(O);

//--- Usare gli operatori per settare direttamente i bit
Serial.println("Esempio di bit shift");
O = 0;
Serial.print("O = ");Serial.println(O, BIN);
O |= (1 << 2);
Serial.print("O |= (1 << 2) ----> ");Serial.println(O, BIN);

// Adesso ho 0000 0100, per azzerare tutto applico una maschera con la tilde 1111 1011
O &= ~(1 << 2);// &= ~ applica la maschera per azzerare tutto
Serial.println(O, BIN); 


//Prove con HSB e LSB, scomporre in 2 parti un registro da 8 bit
unsigned int x = B11111001; 
uint8_t xlow = x & 0xf; //f indica 4 bit, ff se mi servono 8 bit (da un registro di 16)
uint8_t xhigh = (x >> 4) & 0xf; //& 0xf puo essere sostituito  da & 255
Serial.print("xlow = ");Serial.println(xlow, BIN);
Serial.print("xhigh = ");Serial.println(xhigh, BIN);

}



void loop() {
  // put your main code here, to run repeatedly:

}
