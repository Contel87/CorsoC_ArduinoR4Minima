void setup() {
  Serial.begin(9600);
  delay(2000);
  String line = "23/04/27,16:02:34";
  //il metodo cstr ritorna un array di caratteri di sola lettura che posso passare direttamente ad una funzione
  // char punta ad un array di caratteri chiamato "data"
  const char* data = line.c_str();

 Serial.println(data);
 int hh, mi, ss, yy, mm, dd;
  sscanf(data, "%02d/%02d/%02d,%02d:%02d:%02d", &yy, &mm, &dd, &hh, &mi, &ss ); //Tra le "" si indica un pattern (o segnaposto) per decodificare le informazioni e trasferirle nelle variabili passate per indirizzo (yy mm ecc..)
 
 Serial.println(yy);
 Serial.println(mm);
 Serial.println(dd);
 Serial.println(hh);
 Serial.println(mi);
 Serial.println(ss);
}

void loop() {
  // put your main code here, to run repeatedly:

}
