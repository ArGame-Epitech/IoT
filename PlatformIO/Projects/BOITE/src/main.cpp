#include <Arduino.h>
#include <Wire.h>
#include <iostream>
using namespace std ;


void setup() {
  Serial.begin(115200);
  Serial.println("Hello World");
}

void loop() {
  // Code à exécuter en boucle (si nécessaire)
  delay(10);
}