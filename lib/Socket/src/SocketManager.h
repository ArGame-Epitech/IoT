#ifndef SOCKET_MANAGER_H
#define SOCKET_MANAGER_H

#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEAdvertising.h>
#include <BLEService.h>
#include "MyBLEServerCallbacks.h"
#include "MyBLEConsts.h"
#include "../Characteristics/Authentication/include/AuthenticationCharacteristic.h"


namespace socket {    
 
    class ISocketManager {
    public:
        virtual void setup() = 0;
        virtual void loop() = 0;    
    };

    class BLESocketManager : public ISocketManager {
    public:
       BLESocketManager();
       virtual void setup() override ;
       virtual void loop() override;
       BLEServer* pBleServer;
       MyBLEServerCallbacks* pMyBleServerCallbacks;
       BLEService* pService;
    };    
}

#endif // SOCKET_MANAGER_H
