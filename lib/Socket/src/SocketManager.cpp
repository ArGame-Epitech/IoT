#include "SocketManager.h"
#include "Socket.h"


namespace socket {

    BLESocketManager::BLESocketManager() : pBleServer(NULL), pBleSocketCallbacks(NULL) {}

    void BLESocketManager::setup() {
        
        BLEDevice::init(BleSocketCallbacks::DEVICE_NAME);
        pBleSocketCallbacks = new BleSocketCallbacks();
        pBleServer = BLEDevice::createServer();
        pBleServer->setCallbacks(pBleSocketCallbacks);

        BLEService* pService = pBleServer->createService(BLEUUID(BleSocketCallbacks::BLE_ID));

        pService->addCharacteristic(new characteristics::AuthenticationCharacteristic());
      
        pService->start();
        pBleServer->getAdvertising()->start();
    }

void BLESocketManager::loop() {
    // Vérifier si on devrait commencer à faire de la publicité
    if (!pBleSocketCallbacks->isAdvertising) {
        pBleServer->getAdvertising()->start();
        pBleSocketCallbacks->isAdvertising = true;
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

