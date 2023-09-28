#pragma once
#include <BLECharacteristic.h>
#include <Arduino.h>


namespace characteristics {

 
class ICharacteristicCallBacks : public BLECharacteristicCallbacks {
public:    

  virtual void onWrite(BLECharacteristic *pCharacteristic) = 0;
  virtual void onRead(BLECharacteristic *pCharacteristic) = 0;
  virtual void onNotify(BLECharacteristic *pCharacteristic) = 0;


protected:

     virtual bool haveToSetCallBack() const = 0;
     virtual bool haveToSetDescriptor() const = 0;
  };

}