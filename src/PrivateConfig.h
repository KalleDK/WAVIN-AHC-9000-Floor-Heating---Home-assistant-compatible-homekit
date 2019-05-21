#include <ESP8266WiFi.h>

// WIFI and MQTT Broker setup

const String   WIFI_SSID = "Enter wireless SSID here";         // wifi ssid
const String   WIFI_PASS = "Enter wireless password here";     // wifi password

const String   MQTT_SERVER = "Enter mqtt server address here"; // mqtt server address without port number
const String   MQTT_USER   = "Enter mqtt username here";       // mqtt user. Use "" for no username
const String   MQTT_PASS   = "Enter mqtt password here";       // mqtt password. Use "" for no password


// Status LED´s - define PIN´s as you like - i use this setup on a Wemos D1 Mini Pro

#define LED1 D2    // Status Led for MQTT

#define LED2 D5     // Status Led for WIFI

#define LED3 D4     // Status Led for showing ESP MCU is powered on
