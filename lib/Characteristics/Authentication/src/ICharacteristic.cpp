
#include <ICharacteristic.h>

namespace characteristics {

    ICharacteristic::ICharacteristic(BLEUUID uuid, uint32_t properties) : BLECharacteristic(uuid, properties) {

      Serial.println("ICharacteristic constructor");
      Serial.println(uuid.toString().c_str());
      Serial.println(properties);
      
     };

    ICharacteristic::~ICharacteristic() = default;
  

// class ICharacteristicCallBacks : public BLECharacteristicCallbacks {
// public:    
//   virtual void onWrite(BLECharacteristic *pCharacteristic);
//   virtual void onRead(BLECharacteristic *pCharacteristic);

// };


}