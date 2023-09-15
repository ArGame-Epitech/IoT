#include "AuthenticationCharacteristic.h"



namespace characteristics {

AuthenticationCharacteristic::AuthenticationCharacteristic() {}

void AuthenticationCharacteristic::onWrite(BLECharacteristic *pCharacteristic)  {
  
  std::string value = pCharacteristic->getValue();

  Serial.print("valueSend = : ");
  Serial.println(value.c_str());
  
  if (value == AuthenticationCharacteristic::AUTH_SHARED_TOKEN) {

    Serial.println("Authentication Complete");
    pCharacteristic->setValue("Authenticated");

    pCharacteristic->notify(true);

  } else {
    Serial.println("Authentication Failed");
    pCharacteristic->setValue("Wrong Token");

    pCharacteristic->notify(true);
  } 
}

void AuthenticationCharacteristic::onRead(BLECharacteristic *pCharacteristic) {
  Serial.println("OnRead Auth CHarateristics");
}
}