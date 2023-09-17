#ifndef CHARACTERISTICS_H
#define CHARACTERISTICS_H

#include <BLECharacteristic.h>
#include <Arduino.h>
#include <BLE2902.h>
#include <ICharacteristic.h>
#include <AuthenticationCharacteristicCallBacks.h>

namespace characteristics {

  class AuthenticationCharacteristic : public ICharacteristic {
  public:    

    virtual BLEUUID getUUID() override;     
    virtual uint32_t getProperties() override;

    static const char* getSharedToken() {
      return AUTH_SHARED_TOKEN;
    }
    
    AuthenticationCharacteristic();
    ~AuthenticationCharacteristic() = default;

  private:
      static constexpr const char* UUID = "07d55126-8fd5-488e-9666-7658fd2059d3";
      static constexpr const char* AUTH_SHARED_TOKEN = "pass";
      static const uint32_t PROPERTIES = BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE | BLECharacteristic::PROPERTY_NOTIFY;
  
  };

}
#endif // CHARACTERISTICS_H