/*---Variabile extern---*/
/* Per utilizzare una variabile dichiarata fuori dal blocco di codice in cui viene utilizzata si puo usare \
il modificatore di tipo extern. Va anteposto nel momento in cui viene dichiarata per dire al compilatore di \
andarla a pescare fuori dal blocco di codice in cui siamo.
*/

void setup() {
  Serial.begin(9600);
  delay(2000);
  int y; // il modificatore di tipo extern dice di adare a cercare la y fuori dal blocco setup(){}
  Serial.println(y);
}

void loop() {
  // put your main code here, to run repeatedly:

}

extern int y = 87; // l'inizializzazione della variabile avviene senza anteporre nessun modificatore
