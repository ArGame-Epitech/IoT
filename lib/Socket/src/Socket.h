#ifndef SOCKET_H
#define SOCKET_H

#include <Arduino.h>
#include <BLEServer.h>

namespace socket {



    template <typename T>
    class ISocketServer {
    public:
        virtual void onConnect(T* pBleServer) = 0;
        virtual void onDisconnect(T* pBleServer) = 0;
    };

    class BleSocket : public ISocketServer<BLEServer>, public BLEServerCallbacks {
    public:
        bool isAdvertising = true;
        BLECharacteristic* pCharacteristic = NULL;
        static constexpr const char* DEVICE_NAME = "SafeCUBE";
        static constexpr const char* BLE_ID = "e94b456b-3786-4f1a-9c2a-a495cc4bc48f";

        BleSocket();
        ~BleSocket() = default;

        void onConnect(BLEServer* pBleServer) override;
        void onDisconnect(BLEServer* pBleServer) override;
    };


}

#endif // SOCKET_H
