
#include "AuthenticationCharacteristicCallBacks.h"

namespace characteristics {

AuthenticationCharacteristicCallBacks::AuthenticationCharacteristicCallBacks() {}

bool AuthenticationCharacteristicCallBacks::haveToSetCallBack() const {
  return true;
}
bool AuthenticationCharacteristicCallBacks::haveToSetDescriptor() const {
  return true;
}

void AuthenticationCharacteristicCallBacks::onWrite(BLECharacteristic *pCharacteristic)  {
  
  std::string value = pCharacteristic->getValue();

  Serial.print("valueSend = : ");
  Serial.println(value.c_str());
  //TODO : traitemnet à faire dans le state
  if (value == AuthenticationCharacteristic::getSharedToken() ) {

    Serial.println("Authentication Complete");
    pCharacteristic->setValue("Authenticated");

    pCharacteristic->notify(true);

  } else {
    Serial.println("Authentication Failed");
    pCharacteristic->setValue("Wrong Token");

    pCharacteristic->notify(true);
  } 
}

void AuthenticationCharacteristicCallBacks::onRead(BLECharacteristic *pCharacteristic) {
  Serial.println("OnRead Auth CHarateristics");
}

void AuthenticationCharacteristicCallBacks::onNotify(BLECharacteristic *pCharacteristic) {
  Serial.println("OnNotify Auth CHarateristics");
}
    
    } // namespace characteristics