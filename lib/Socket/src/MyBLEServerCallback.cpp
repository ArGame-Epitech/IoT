#include "MyBLEServerCallbacks.h"

using namespace socket;

    MyBLEServerCallbacks::MyBLEServerCallbacks()  {}


    void MyBLEServerCallbacks::onConnect( BLEServer* myBLEServer) {
        Serial.println("Connected");      
    }

    void MyBLEServerCallbacks::onDisconnect(BLEServer* myBLEServer) {
       
        Serial.println("Disconnected");
        myBLEServer->getAdvertising()->stop();
        myBLEServer->getAdvertising()->start();



}
