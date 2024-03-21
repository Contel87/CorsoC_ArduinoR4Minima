void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.println("Inserisci un numero: ");
}

void loop() {
  
  while(Serial.available()) {

int leggi = Serial.parseInt();

String h = String(leggi);
const char* intString = h.c_str();

int gg;
sscanf(intString, "%03d", &gg);//Taglia dopo le prime 3 cifre
Serial.print("Il numero inserito e': ");Serial.println(gg);



 }
}

