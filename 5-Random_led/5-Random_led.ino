int seq[10];

void setup(){
  Serial.begin(9600);
  delay(2000);
  Serial.print("Il led TX corrrisponde al pin: ");Serial.println(LED_TX);
  Serial.print("Il led RX corrrisponde al pin: ");Serial.println(LED_RX);

pinMode(LED_TX, OUTPUT);
pinMode(LED_RX, OUTPUT);

//------------------------------------Solo per testare la seriale--------------------------------------------------------------
//sizeof misura lunghezza variabile in byte(restituirebbe 20!), perciò si divide per int (2)
for (int i = 0; i<sizeof(seq)/sizeof(int) ; i++){ //Indipendentemente dalla grandezza dell'array uso quello che c'e' dentro
  seq[i] = random(21, 23); // 21=LED_TX,22=LED_RX, il 23 non uscira' mai
Serial.println(seq[i]);
}
//-----------------------------------------------------------------------------------------------------------------------------


}


void loop(){
  for(int i = 0; i <sizeof(seq)/sizeof(int); i++){

digitalWrite(LED_RX, HIGH); //High spegne, Low accende
digitalWrite(LED_TX, HIGH);

digitalWrite(seq[i], LOW);
delay(500);
digitalWrite(seq[i], HIGH);
delay(500);
  }

  
  delay(1000);


  //turn off all LEDs

  digitalWrite(LED_BUILTIN, LOW);

  digitalWrite(LED_RX, HIGH);

  digitalWrite(LED_TX, HIGH);

  delay(1000);
  

}