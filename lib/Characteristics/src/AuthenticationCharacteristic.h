#ifndef CHARACTERISTICS_H
#define CHARACTERISTICS_H

#include <BLECharacteristic.h>
#include <Arduino.h>

namespace characteristics {

class AuthenticationCharacteristic : public BLECharacteristicCallbacks {
public:
  AuthenticationCharacteristic();
static constexpr const char* UUID = "07d55126-8fd5-488e-9666-7658fd2059d3";
    static constexpr const char* AUTH_SHARED_TOKEN = "07d";
    // static constexpr const char* AUTH_SHARED_TOKEN = "07d55126-8fd5-488e-9666-7658fd2059d3";
  virtual void onWrite(BLECharacteristic *pCharacteristic);
  virtual void onRead(BLECharacteristic *pCharacteristic);
};


}
#endif // CHARACTERISTICS_H