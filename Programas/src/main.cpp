#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  if (Serial.available()>0){
      char Dato = Serial.read();
      if (Dato == 'A') digitalWrite(2,HIGH); 
        else if (Dato == 'B') digitalWrite(2,LOW);
        
  }
  
}