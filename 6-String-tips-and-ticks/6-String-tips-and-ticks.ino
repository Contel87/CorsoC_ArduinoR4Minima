void setup() {
  Serial.begin(9600);
  delay(2000);

/*Esempio 1 sizeof() , strlen()*/
  char str[10];
  str[0]='h';
  str[1]='e';
  str[2]='\0';

  Serial.print("La Stringa str e' lunga: ");Serial.print(sizeof(str));Serial.print(" posizioni ");Serial.print("e contiene : ");Serial.print(strlen(str));Serial.println(" caratteri");

/*Esempio 2 strcmp() compara il valore in ASII delle stringhe, positivo strina1 maggiore, negativo stringa 2 maggiore
Zero se le stringhe sono uguali
*/
int ans;
char s1[] = "Linuxhint"; /*String1 starts with small i (ASCII Code 105 in Decimal)*/
char s2[] = "Linuxhunt"; /*String2 starts with small u (ASCII Code 117 in Decimal)*/

if(!strcmp(s1,s2)){
Serial.println("Le stringhe sono uguali!!");
} else {
Serial.println("Le stringhe NON sono uguali");
}

/*Esempio 3 concatenare stringhe con strcat()*/
strcat(s1,s2); 
Serial.println(s1); //s1 = unione s1 + s2


/*Esempio 4 strcpy() copia in una stringa*/
char citta[30];
strcpy (citta, "Milano marittima");
Serial.println(citta);

/*Esempio 5 strchr cerca un carattere in una stringa */
if(strchr("salve", 'e')){
  Serial.println("Trovata la e nella stringa salve!");

/*Esempio 6 strstr cerca una stringa in un altra stringa*/
if(strstr("nel mezzo del cammin", "del")){
  Serial.println("Trovato del !!");
}

}


}

void loop() {
  // put your main code here, to run repeatedly:

}
