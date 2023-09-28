#pragma once

#include <BLECharacteristic.h>
#include "ICharacteristicCallBacks.h"
#include "AuthenticationCharacteristic.h"

namespace characteristics {


class AuthenticationCharacteristicCallBacks : public ICharacteristicCallBacks {
public:

  AuthenticationCharacteristicCallBacks();  
  ~AuthenticationCharacteristicCallBacks() = default;

  virtual void onWrite(BLECharacteristic *pCharacteristic) override;
  virtual void onRead(BLECharacteristic *pCharacteristic) override ;
  virtual void onNotify(BLECharacteristic *pCharacteristic) override ;

  bool haveToSetCallBack() const override;
  bool haveToSetDescriptor() const override;

private:

  bool const mustSetCallBack  = true;
  bool const mustSetDescriptor = true;

};


}