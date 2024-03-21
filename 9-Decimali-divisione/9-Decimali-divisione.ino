void setup() {
  Serial.begin(9600);
  delay(2000);

  int n = 10;
  int m = 3;
  //float d = n/m; //NON FUNZIONA, perde i decimali
  float d = (float)n /m; //conversione da tipo int a tipo float di n mi da i decimali in divisione
  Serial.println(d);

}

void loop() {
  // put your main code here, to run repeatedly:

}
