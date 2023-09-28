#include "SocketManager.h"


using namespace socket;
using namespace characteristics;

    BLESocketManager::BLESocketManager() : pMyBleServerCallbacks(new MyBLEServerCallbacks()) {
      
    }

    void BLESocketManager::setup() {  
           
        BLEDevice::init(MyBLEConsts::DEVICE_NAME);
        pBleServer = BLEDevice::createServer();
        pBleServer->setCallbacks(pMyBleServerCallbacks);

        BLEService* pService = pBleServer->createService(BLEUUID(MyBLEConsts::BLE_ID)); 

        pService->addCharacteristic(new AuthenticationCharacteristic());
      
        pService->start();
        pBleServer->startAdvertising();
    }

void BLESocketManager::loop() {

    if(pBleServer->getServiceByUUID(BLEUUID(MyBLEConsts::BLE_ID)) == nullptr) {
        Serial.println("Restarting BLE");
        setup();
    }
 
    // Vérifier si on devrait commencer à faire de la publicité
    if (!pBleServer->getAdvertising()) {
        pBleServer->startAdvertising();
        Serial.println("Advertising started");
        digitalWrite(2, LOW); 
    }

    // Gérer les connexions
    int connectedCount = pBleServer->getConnectedCount();
    if (connectedCount > 0) {
        
        digitalWrite(2, HIGH);
    } else {
        
        digitalWrite(2, LOW);
        delay(500);
        digitalWrite(2, HIGH);
        delay(500);  
    }
}


