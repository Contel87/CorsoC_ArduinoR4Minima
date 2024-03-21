char comando;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
 comando = Serial.read();
 if (comando == 'a'){
digitalWrite(13, HIGH);
Serial.println("led ON");
}
if (comando == 's'){
digitalWrite(13, LOW);
Serial.println("led OFF");

}

}
