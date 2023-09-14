#include "SocketManager.h"
#include "Socket.h"

namespace socket {

    BLESocketManager::BLESocketManager() : pBleServer(NULL), pBleServerSocket(NULL) {}

    void BLESocketManager::setup() {
        BLEDevice::init(BleSocket::DEVICE_NAME);
        pBleServerSocket = new BleSocket();
        pBleServer = BLEDevice::createServer();
        pBleServer->setCallbacks(pBleServerSocket);

        BLEService* pService = pBleServer->createService(BLEUUID(BleSocket::BLE_ID));
        pBleServerSocket->pCharacteristic = pService->createCharacteristic(
            BLEUUID("ca49ea0c-4bd7-11ee-be56-0242ac120001"),
            BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE
        );

        pBleServerSocket->pCharacteristic->addDescriptor(new BLE2902());
        pService->start();
        pBleServer->getAdvertising()->start();
    }

    void BLESocketManager::loop() {
        if (!pBleServerSocket->isAdvertising) {
            pBleServer->getAdvertising()->start();
            pBleServerSocket->isAdvertising = true;
            Serial.println("Advertising");
        }

        if (pBleServer->getConnectedCount() > 0) {
            digitalWrite(2, HIGH);
            delay(1000);
        } else {
            delay(1000);
            digitalWrite(2, LOW);
            delay(1000);
            digitalWrite(2, HIGH);
        }
    }
}
