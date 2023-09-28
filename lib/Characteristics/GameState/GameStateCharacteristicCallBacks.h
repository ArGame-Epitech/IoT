#pragma once

#include <BLECharacteristic.h>
#include "ICharacteristicCallBacks.h"
#include "GameStateCharacteristic.h"

namespace characteristics {

class GameStateCharacteristicCallBacks : public ICharacteristicCallBacks  {

public:
   GameStateCharacteristicCallBacks();
   virtual ~GameStateCharacteristicCallBacks() = default;

   void onWrite(BLECharacteristic *pCharacteristic) override;
   void onRead(BLECharacteristic *pCharacteristic) override ;
   void onNotify(BLECharacteristic *pCharacteristic) override ;

  bool haveToSetCallBack() const override;
  bool haveToSetDescriptor() const override;

private:

  bool const mustSetCallBack  = true;
  bool const mustSetDescriptor = true;

  

};

}