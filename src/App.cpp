#include <Arduino.h>
#include <Wire.h>
#include <iostream>
#include "App.h"
// #include <WiFi.h>
#include "AppManager.h"
#include "SocketManager.h"

using namespace std;

// const char* ssid = "OPPO";
// const char* password = "d6wf2yng";
socket::BLESocketManager socketManager;
#define ONBOARD_LED 2

// void get_network_info(){
//     if(WiFi.status() == WL_CONNECTED) {
//         Serial.print("[*] Network information for ");
//         Serial.println(ssid);

//         Serial.println("[+] BSSID : " + WiFi.BSSIDstr());
//         Serial.print("[+] Gateway IP : ");
//         Serial.println(WiFi.gatewayIP());
//         Serial.print("[+] Subnet Mask : ");
//         Serial.println(WiFi.subnetMask());
//         Serial.println((String)"[+] RSSI : " + WiFi.RSSI() + " dB");
//         Serial.print("[+] ESP32 IP : ");
//         Serial.println(WiFi.localIP());
//     }
   
// }

App::App() {

    pinMode(ONBOARD_LED,OUTPUT);
    Serial.begin(9600);
    delay(1000);
    // WiFi.mode(WIFI_STA); //Optional
    // WiFi.begin(ssid, password);
    // Serial.println("\nConnecting");

    // while(WiFi.status() != WL_CONNECTED){
    //     delay(1000);
    //     digitalWrite(ONBOARD_LED,HIGH);
    //     delay(1000);
    //     digitalWrite(ONBOARD_LED,LOW);
    // }
    // Serial.println("\nConnected to the WiFi network");
    digitalWrite(ONBOARD_LED,HIGH);
    // get_network_info();
    
    socketManager.setup();

    
}

void App::loop() {

 socketManager.loop();
 

}