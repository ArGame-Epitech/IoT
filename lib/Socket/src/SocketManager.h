#ifndef SOCKET_MANAGER_H
#define SOCKET_MANAGER_H

#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
#include "Socket.h"

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
           
    private:
        BLEServer* pBleServer;
        BleSocket* pBleServerSocket;
    };

}

#endif // SOCKET_MANAGER_H
