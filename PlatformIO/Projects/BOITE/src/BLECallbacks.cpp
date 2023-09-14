#include <Arduino.h>
#include <BLEServer.h>
#include "BLECallbacks.h"


BLECallbacks::BLECallbacks() {
    // Empty constructor
}

void BLECallbacks::onConnect(BLEServer* pServer) {
    Serial.println("Connected");
    // Send a message to the device connected
    pCharacteristic->setValue("Hello!");
    pCharacteristic->notify();
}

void BLECallbacks::onDisconnect(BLEServer* pServer) {
    isAdvertising = false;
    Serial.println("Disconnected");

    // Stop advertising
    pServer->getAdvertising()->stop();
}
