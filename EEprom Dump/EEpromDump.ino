#include <EEPROM.h>

void setup() {
 
  Serial.begin(9600);
  
  //eeprom_read_block(0x3f0);

  eeprom_dump();
  }


void loop() {
}
    void eeprom_read_block(unsigned eeaddr){
    Serial.print("EEprom block ");Serial.println((eeaddr),HEX);
    byte buffer [32];
    for(int a = eeaddr; a<(eeaddr+16) ; a++){
      if (a%8==0) {    
     Serial.print(" ");
           }
     buffer[a] = EEPROM.read(a);
      char outbuf[2];
      sprintf(outbuf, "%02X ", buffer[a]);
      
      Serial.print(outbuf);
      }
      Serial.print(" |");
       for (int j = eeaddr; j < (eeaddr+16); j++) {
           if (isprint(char(buffer[j]))) {
               Serial.print(char(buffer[j]));
           }
           else {
               Serial.print('.');
           }
       }
       Serial.println("|");
       
   }


void eeprom_dump() {
  delay(100);
   Serial.println("Block #  | 00 01 02 03 04 05 06 07  08 09 0A 0B 0C 0D 0E 0F  |    ACII        |");
   Serial.println();
   unsigned i;
   for (i = 0; i < EEPROM.length(); i += 16) {
       byte buffer[1024]; // Hold a page of EEPROM
       char outbuf[6];  //Room for three hex digits and ':' and ' ' and '\0'
       sprintf(outbuf, "%08X: ", i);
       Serial.print(outbuf);
       int a;

   for( a = i; a<(i+16) ; a++){
      if (a%8==0) {    
      Serial.print(" ");
           }
     buffer[a] = EEPROM.read(a);
      char outbuf[2];
      sprintf(outbuf, "%02X ", buffer[a]);
      Serial.print(outbuf);
      
    }
       
       Serial.print(" |");
       for (int j = i; j < (i+16); j++) {
           if (isprint(char(buffer[j]))) {
               Serial.print(char(buffer[j]));
           }
           else {
               Serial.print('.');
           }
       }
       Serial.println("|");
           
       }
       
      
   }