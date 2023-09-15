#include "Socket.h"

socket::BleSocketCallbacks::BleSocketCallbacks() {}

void socket::BleSocketCallbacks::onConnect(BLEServer* pServer) {
    Serial.println("Connected");
    // pConnectionCharacteristic->setValue("Hello!");
    // pConnectionCharacteristic->notify();
}

void socket::BleSocketCallbacks::onDisconnect(BLEServer* pServer) {
    isAdvertising = false;
    Serial.println("Disconnected");
    pServer->getAdvertising()->stop();
}
