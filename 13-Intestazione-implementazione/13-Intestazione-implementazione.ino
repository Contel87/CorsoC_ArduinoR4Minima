#include "test.h"



void setup() {
  Serial.begin(9600);
  while(!Serial){
    exit;
  }
  
  int n = test();
  Serial.println(n);

}

void loop() {
  
}
