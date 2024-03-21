void setup() {
  pinMode(21, OUTPUT);

/*Il goto crea un secondo loop nel setup*/
loop:  //LBL di partenza...importante usare i due punti
digitalWrite(21, !digitalRead(21));
delay(300);
goto loop; // Jump to label loop:

}

void loop() {
  // put your main code here, to run repeatedly:

}
