#ifndef _WIFICONNECTION_H
#define _WIFICONNECTION_H

#include <ESP8266WiFi.h>

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

#include <PubSubClient.h>
#include <stdint.h>

// Debug wifi connection
#define DEBUG_W 1


class WifiConnection {
  public:
    /**
     * Constructor
     */
     WifiConnection();
     /**
      * Configure esp8266 only in mode Access Point, ip default
      * ssid: "Robota + chip id"
      */
     void onlyAP();
     /**
      * WiFiMAnager setup
      */
     void wifiSetup();
     /**
      * return ssid, the same to id of robota
      */
      String getSSID();
      /**
       * return AP, DOMOTTA-XXXX (mac)
       */
      const char * getAP();

 private:
   String _NameString = "DOMOTTA";
   const char * _AP_NameString;
   uint8_t _mac[6];
 };

#endif // _WIFICONNECTION_H
