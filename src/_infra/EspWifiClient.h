// WifiClient.h

#ifndef ESP_WIFI_CLIENT_H
#define ESP_WIFI_CLIENT_H

#include <Arduino.h>
#include <WiFi.h>

class EspWifiClient
{
public:
    EspWifiClient();
    ~EspWifiClient();
    void setup();
    WiFiClient *getWifiClient();
    String getDeviceName();
    String getLocalIP();

private:
    WiFiClient wifiClient;
    void connect();
    void reconnect();
};

#endif // ESP_WIFI_CLIENT_H