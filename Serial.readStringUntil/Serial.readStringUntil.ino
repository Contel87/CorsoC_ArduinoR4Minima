void setup() {
  Serial.begin(9600);
  delay(2000);

}

void loop() {
  while (Serial.available()) {
  String incomingString = Serial.readStringUntil('$');//il $ è visto come fine stringa
  Serial.println(incomingString);
  }

}
