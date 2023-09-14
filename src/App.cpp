#include <Arduino.h>
#include <iostream>
#include "App.h"
#include "AppManager.h"
#include "SocketManager.h"

using namespace std;

socket::BLESocketManager socketManager;
#define ONBOARD_LED 2

App::App() {

    pinMode(ONBOARD_LED,OUTPUT);
    Serial.begin(9600);
    delay(1000);
    digitalWrite(ONBOARD_LED,HIGH);    
    socketManager.setup();    
}

void App::loop() {
 socketManager.loop();
}