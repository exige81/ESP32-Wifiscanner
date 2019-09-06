#include <Arduino.h>
#include <WiFi.h> //Wifi Lib
#include <ESPAsyncWebServer.h> // Web Server
#include <AsyncTCP.h> // Needed for ESP32 Web Server
#include <SPIFFS.h>

// Set Config
#include "config.h"
#include "WiFiSetup.h"

// #define UseWebSocket true
// #define UseServerSideEvent false
// #define ResponseAppleCNA true
#define CaptivePortalTimeout 180

AsyncWebServer *webServer;


void setup() {
  Serial.begin(115200);

  DBG_PRINTF("Starting WiFi...\n");
	WiFiMode wifiMode= (WiFiMode) WIFI_AP_STA;
	WiFiSetup.staConfig(IPAddress(0,0,0,0),IPAddress(0,0,0,0),IPAddress(0,0,0,0),IPAddress(0,0,0,0));
	// WiFiSetup.onEvent(wiFiEvent);
	WiFiSetup.begin(wifiMode,DEFAULT_HOSTNAME,DEFAULT_PASSWORD);
  DBG_PRINTF("WiFi Done!\n");
}

void loop() {
  String command = Serial.readString();

  if (command == "s"){
    WiFiSetup.scanWifi();
  }
  // delay(10000)
  // WiFi.printDiag(Serial);
}