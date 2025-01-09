//Config file for WiFi and OTA stuff
//Replace ssid and password with your ssid and password
//Replace the local IP and Gateway with your desired static ip and the routers ip

#ifndef CONFIG_H
#define CONFIG_H

//Includes
#include <IPAddress.h>

// Constants
#define WIFI_SSID "SSID HERE"
#define WIFI_PASSWORD "PASSWORD HERE"


#define LOCAL_IP IPAddress(192, 168, X, X) //Set the static address you want
#define GATEWAY IPAddress(192, 168, X, X) //Set the gateway (router) IP
#define SUBNET IPAddress(255, 255, 255, 0) //subnet

#endif // CONFIG_H