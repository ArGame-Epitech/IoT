#include "App.h"
#include <Arduino.h>
#include <Wire.h>
#include <iostream>

void App::start() {
    setup();
    loop();
}

void App::setup() {
  Serial.begin(115200);
  Serial.println("Setup called ();");
}

void App::loop() {
  Serial.println("Loop called ();");
}


