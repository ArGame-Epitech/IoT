#ifndef MYBLESERVERCALLBACKS_H
#define MYBLESERVERCALLBACKS_H

#include <Arduino.h>
#include "MyBLEConsts.h"


namespace socket {

  template <typename T>
    class ISocketServer {
    public:
        virtual void onConnect(T* pBleServer) = 0;
        virtual void onDisconnect(T* pBleServer) = 0;
    };

    // class MyBLEServer;  // Forward declaration


    class MyBLEServerCallbacks :  public ISocketServer<BLEServer>,  public BLEServerCallbacks {
    public:

        BLEAdvertising* pAdvertising = NULL;
        BLECharacteristic* pAuthCharacteristic = NULL;
     
        MyBLEServerCallbacks();
        ~MyBLEServerCallbacks() = default;

        virtual void onConnect(BLEServer* pBleServer) ;
        virtual void onDisconnect(BLEServer* pBleServer) ;

    };

}

#endif // MYBLESERVERCALLBACKS_H