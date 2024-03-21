/*
How to use sprintf on arduino UNO
Special thanks to Paolo Aliverti @zeppelinmaker
*/

int n = 123;
char str [100]; 
char len [100];
float temp = 12.234534345;

void setup() {
  Serial.begin(9600);
  delay(2000);

 //Es.1 Padding usando 2 zeri prima di un numero intero 
  sprintf(str, "%05d", n);
 Serial.println(str);

 //Es.2 Stampare la lunghezza in bit di una stringa
 int p = sprintf(len, "%05d", n);
 sprintf(len, "Il numero formattato è: %05d e occupa %d posti", n, p);
 Serial.println(len);

 //Es.3 Il float nella sprint in arduino R4 restituisce 6 cifre decimali e taglia il resto, in R3 non funziona
 sprintf(str, "%f", temp);
 Serial.println(str);

 //Es.4 In arduino UNO R3 float e sprintf non vanno daccordo, percio si usa dtostrf
 dtostrf(temp, 10,2, str); // 10 è la lunghezza massima della stringa, 2 lecifre decimali
 Serial.println(str);

//Es.4bis funziona anche con numeri negativi
 dtostrf(-temp, 10,4, str);
 Serial.println(str);


}

void loop() {
 }
