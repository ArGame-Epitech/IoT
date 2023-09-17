#include "AuthenticationCharacteristic.h"



namespace characteristics {

  BLEUUID  AuthenticationCharacteristic::getUUID()  {
  return BLEUUID(UUID);
}

uint32_t AuthenticationCharacteristic::getProperties()  {
  return PROPERTIES;
}

AuthenticationCharacteristic::AuthenticationCharacteristic() : ICharacteristic(getUUID(), getProperties()) {

  this->setCallbacks(new AuthenticationCharacteristicCallBacks());
  this->addDescriptor(new BLE2902());
}


}