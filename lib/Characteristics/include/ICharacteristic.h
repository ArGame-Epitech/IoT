#ifndef ICHARACTERISTICS_H
#define ICHARACTERISTICS_H

#include <BLECharacteristic.h>
#include <Arduino.h>
#include <BLE2902.h>


namespace characteristics {

  class ICharacteristic : public BLECharacteristic {
  public:   
   
    virtual BLEUUID getUUID() = 0;
    virtual uint32_t getProperties() = 0;

    ICharacteristic(BLEUUID uuid, uint32_t properties) : BLECharacteristic(uuid, properties) { };

    ~ICharacteristic() = default;
  };

}
#endif // CHARACTERISTICS_H