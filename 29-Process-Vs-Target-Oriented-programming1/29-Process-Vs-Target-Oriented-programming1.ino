/* Process-Oriented-Vs-Target-Oriented-programming
 * Questo e' il classico esempio del lampeggio led in stile "Target-Oriented"
*/


void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
