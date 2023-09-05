#include <Arduino.h>
#include <Wire.h>
#include <iostream>
#include "App.h"
using namespace std;

void setup() {
  Serial.begin(115200);
  Serial.println("Hello World");
}

void loop() {
  // Code à exécuter en boucle (si nécessaire)
  delay(10);
}