void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.println("Inserisci data di nascita (gg/mm/aaaa): ");
}

void loop() {
  while(Serial.available()) {

String leggi = Serial.readString();
const char* data = leggi.c_str();
//Serial.println(data);
int gg, mm, aaaa;
sscanf(data, "%02d/%02d/%04d", &gg, &mm, &aaaa);
Serial.print("Giorno: ");Serial.println(gg);
Serial.print("Mese: ");Serial.println(mm);
Serial.print("Anno: ");Serial.println(aaaa);

  }
}
