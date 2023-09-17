#include "../include/AuthenticationCharacteristic.h"
namespace characteristics {

  BLEUUID  AuthenticationCharacteristic::getUUID()  {
  return BLEUUID(UUID);
}

uint32_t AuthenticationCharacteristic::getProperties()  {
  return PROPERTIES;
}

AuthenticationCharacteristic::AuthenticationCharacteristic() : ICharacteristic(getUUID(), getProperties()) {

  AuthenticationCharacteristicCallBacks* callBacks = new AuthenticationCharacteristicCallBacks();

  if(callBacks->haveToSetCallBack()){

    this->setCallbacks(callBacks);
  }
  if(callBacks->haveToSetDescriptor()) {

    this->addDescriptor(new BLE2902());
    }
}


}