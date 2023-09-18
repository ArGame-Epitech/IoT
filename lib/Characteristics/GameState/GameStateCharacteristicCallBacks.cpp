#include "GameStateCharacteristicCallBacks.h"

namespace characteristics {

GameStateCharacteristicCallBacks::GameStateCharacteristicCallBacks() {}

bool GameStateCharacteristicCallBacks::haveToSetCallBack() const {
  return mustSetCallBack;
}
bool GameStateCharacteristicCallBacks::haveToSetDescriptor() const {
  return mustSetDescriptor;
}

void GameStateCharacteristicCallBacks::onWrite(BLECharacteristic *pCharacteristic)  {
  
  std::string value = pCharacteristic->getValue();

  Serial.print("valueSend = : ");
  Serial.println(value.c_str());

    pCharacteristic->setValue("Authenticated");
    pCharacteristic->notify(true);
  } 


void GameStateCharacteristicCallBacks::onRead(BLECharacteristic *pCharacteristic) {
  Serial.println("OnRead Auth CHarateristics");
}

void GameStateCharacteristicCallBacks::onNotify(BLECharacteristic *pCharacteristic) {
  Serial.println("OnNotify Auth CHarateristics");
}

} // namespace characteristics
    
    