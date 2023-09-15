#ifndef CHARACTERISTICS_H
#define CHARACTERISTICS_H

#include <BLECharacteristic.h>
#include <Arduino.h>
#include <BLE2902.h>

namespace characteristics {

  class AuthenticationCharacteristic : public BLECharacteristic {
  public:    
    static constexpr const char* UUID = "07d55126-8fd5-488e-9666-7658fd2059d3";
    static constexpr const char* AUTH_SHARED_TOKEN = "pass";
    
    AuthenticationCharacteristic();
    ~AuthenticationCharacteristic() = default;
  };

class AuthenticationCharacteristicCallBacks : public BLECharacteristicCallbacks {
public:
  AuthenticationCharacteristicCallBacks();

    
  virtual void onWrite(BLECharacteristic *pCharacteristic);
  virtual void onRead(BLECharacteristic *pCharacteristic);

  
};


}
#endif // CHARACTERISTICS_H