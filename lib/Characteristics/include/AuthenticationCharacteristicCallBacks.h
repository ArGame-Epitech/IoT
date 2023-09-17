#pragma once

#include <BLECharacteristic.h>
#include <Arduino.h>
#include <BLE2902.h>
#include <ICharacteristic.h>
#include <ICharacteristicCallBacks.h>
#include <AuthenticationCharacteristic.h>

namespace characteristics {


class AuthenticationCharacteristicCallBacks : public ICharacteristicCallBacks {
public:

    AuthenticationCharacteristicCallBacks();  
    ~AuthenticationCharacteristicCallBacks() = default;

   virtual void onWrite(BLECharacteristic *pCharacteristic) override;
   virtual void onRead(BLECharacteristic *pCharacteristic) override ;
   virtual void onNotify(BLECharacteristic *pCharacteristic) override ;


protected:

  bool haveToSetCallBack() const override;
  bool haveToSetDescriptor() const override;



};


}