#ifndef BLECALLBACKS_H
#define BLECALLBACKS_H

#include <BLEServer.h>

class BLECallbacks : public BLEServerCallbacks {
    public:
        bool isAdvertising = true;
        BLECharacteristic* pCharacteristic = NULL;

        BLECallbacks();

        void onConnect(BLEServer* pServer) override;
        void onDisconnect(BLEServer* pServer) override;
};

#endif