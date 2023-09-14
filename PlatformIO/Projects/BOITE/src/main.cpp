#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
#include "BLECallbacks.h"

BLEServer* pServer = NULL;

BLECallbacks* serverCallbacks;

void setupBluetoothServer() {
    // Create the BLE Device
    BLEDevice::init("Serveur bluetooth");

    // Instantiate the callbacks
    serverCallbacks = new BLECallbacks();

    // Create the BLE Server
    pServer = BLEDevice::createServer();
    pServer->setCallbacks(serverCallbacks);

    // Create the BLE Service
    BLEService* pService = pServer->createService(BLEUUID("ca49ea0c-4bd7-11ee-be56-0242ac120002"));

    // Create the BLE Characteristic
    serverCallbacks->pCharacteristic = pService->createCharacteristic(
        BLEUUID("ca49ea0c-4bd7-11ee-be56-0242ac120001"),
        BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE
    );

    // Add a descriptor
    serverCallbacks->pCharacteristic->addDescriptor(new BLE2902());

    // Start the service
    pService->start();

    // Start advertising
    pServer->getAdvertising()->start();
}

void setup() {
    // Set Serial port
    Serial.begin(9600);
    delay(2000);

    // Activate pin D2
    pinMode(2, OUTPUT);

    // Set bluetooth server
    setupBluetoothServer();
}

void loop() {    
    if (!serverCallbacks->isAdvertising) {
        // Start advertising
        pServer->getAdvertising()->start();
        serverCallbacks->isAdvertising = true;
        Serial.write("Advertising");
    }
    
    if (pServer->getConnectedCount() > 0) {
        // Activate / Deactivate D2 LED
        digitalWrite(2, HIGH);
        delay(1000);
    } else {
        digitalWrite(2, LOW);
        delay(1000);
    }
}
