#include "GameState/GameStateCharacteristic.h"

namespace characteristics {


BLEUUID  GameStateCharacteristic::getUUID()  {
    return BLEUUID(UUID);
}

uint32_t GameStateCharacteristic::getProperties()  {
    return PROPERTIES;
}


GameStateCharacteristic::GameStateCharacteristic() : ICharacteristic(getUUID(), getProperties()) {

  GameStateCharacteristicCallBacks* callBacks = new GameStateCharacteristicCallBacks();

  if(callBacks->haveToSetCallBack()){

    this->setCallbacks(callBacks);
  }
  if(callBacks->haveToSetDescriptor()) {

    this->addDescriptor(new BLE2902());
    }
}

}