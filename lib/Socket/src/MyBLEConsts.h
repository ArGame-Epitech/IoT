#ifndef MyBLEServer_H
#define MyBLEServer_H

#include <Arduino.h>
#include <BLEServer.h>
#include "MyBLEServerCallbacks.h"
#include "BLEAdvertising.h"
#include "BLECharacteristic.h"
#include "BLEDevice.h"
#include "MyBLEServerCallbacks.h"

namespace socket {

    class MyBLEConsts  {
        public:        
            static constexpr const char* DEVICE_NAME = "SafeCUBE";
            static constexpr const char* BLE_ID = "e94b456b-3786-4f1a-9c2a-a495cc4bc48f";       
            static constexpr const char* ADVERTISING_DATA = "Connected to SafeCUBE";       
        };
}

#endif // MyBLEServer_H