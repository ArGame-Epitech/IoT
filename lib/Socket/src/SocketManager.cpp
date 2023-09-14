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
            BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE //le client peut lire et écrire dans la caractéristique. Possibilités : Notify, Indicate, Broadcast, Write, WriteNR, AuthSignedWrite, Read, WriteNoResponse, WriteWithoutResponse, NotifyEncryptionRequired, IndicateEncryptionRequired, NotifyAuthenticationRequired, IndicateAuthenticationRequired
        );

        pBleServerSocket->pCharacteristic->addDescriptor(new BLE2902()); //le client peut maintenant écrire dans le descripteur BLE2902 pour activer ou désactiver ces fonctionnalités pour cette caractéristique.
        
        BLECharacteristic *pAuthCharacteristic = pService->createCharacteristic(
            characteristics::AuthenticationCharacteristic::UUID,
            BLECharacteristic::PROPERTY_READ | 
            BLECharacteristic::PROPERTY_WRITE |
            BLECharacteristic::PROPERTY_NOTIFY
            );
          pAuthCharacteristic->setCallbacks(&callbacks); //on associe les callbacks à la caractéristique
        
      
        pService->start();
        pBleServer->getAdvertising()->start();
    }

void BLESocketManager::loop() {
    // Vérifier si on devrait commencer à faire de la publicité
    if (!pBleServerSocket->isAdvertising) {
        pBleServer->getAdvertising()->start();
        pBleServerSocket->isAdvertising = true;
        Serial.println("Advertising started");
        digitalWrite(2, LOW);  // Eteindre la LED pour indiquer que la publicité a commencé
    }

    // Gérer les connexions
    int connectedCount = pBleServer->getConnectedCount();
    if (connectedCount > 0) {
        // Allumer la LED si au moins un client est connecté
        digitalWrite(2, HIGH);
    } else {
        // Faire clignoter la LED si aucun client n'est connecté
        digitalWrite(2, LOW);
        delay(500);  // Attendre 500 ms
        digitalWrite(2, HIGH);
        delay(500);  // Attendre 500 ms
    }
}
}

