#include "Socket.h"

socket::BleSocket::BleSocket() {}

void socket::BleSocket::onConnect(BLEServer* pBleServer) {
    Serial.println("Connected");
    pCharacteristic->setValue("Hello!");
    pCharacteristic->notify();
}

void socket::BleSocket::onDisconnect(BLEServer* pBleServer) {
    isAdvertising = false;
    Serial.println("Disconnected");
    pBleServer->getAdvertising()->stop();
}
