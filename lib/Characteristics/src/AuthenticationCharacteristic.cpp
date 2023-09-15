#include "AuthenticationCharacteristic.h"



namespace characteristics {


AuthenticationCharacteristic::AuthenticationCharacteristic() : BLECharacteristic(
    AuthenticationCharacteristic::UUID,
    BLECharacteristic::PROPERTY_READ | 
    BLECharacteristic::PROPERTY_WRITE | 
    BLECharacteristic::PROPERTY_NOTIFY) {
  this->setCallbacks(new AuthenticationCharacteristicCallBacks());
  this->addDescriptor(new BLE2902());
}

AuthenticationCharacteristicCallBacks::AuthenticationCharacteristicCallBacks() {}

void AuthenticationCharacteristicCallBacks::onWrite(BLECharacteristic *pCharacteristic)  {
  
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

void AuthenticationCharacteristicCallBacks::onRead(BLECharacteristic *pCharacteristic) {
  Serial.println("OnRead Auth CHarateristics");
}
}