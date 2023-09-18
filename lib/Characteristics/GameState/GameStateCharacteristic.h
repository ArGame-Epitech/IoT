#pragma once

#include <BLECharacteristic.h>
#include <Arduino.h>
#include <BLE2902.h>
#include "ICharacteristic.h"
#include "GameStateCharacteristicCallBacks.h"

namespace characteristics {

  class GameStateCharacteristic : public ICharacteristic {
  public:    

    virtual BLEUUID getUUID() override;     
    virtual uint32_t getProperties() override; 
    
    GameStateCharacteristic();
    ~GameStateCharacteristic() = default;

  private:
      const char* const UUID = "18d55126-8fd5-488e-9666-7658fd2059e4";      
      const uint32_t PROPERTIES = BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_WRITE | BLECharacteristic::PROPERTY_NOTIFY;
  };
}