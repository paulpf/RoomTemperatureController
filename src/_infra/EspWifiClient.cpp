#ifdef USE_PRIVATE_SECRET
#include "../../_secrets/WifiSecret.h"
#else
#include "./_secrets/WifiSecret.h"
#endif

#include "EspWifiClient.h"
#include <Arduino.h>
#include "../_def/constants.h"

EspWifiClient::EspWifiClient()
{
}

EspWifiClient::~EspWifiClient()
{
    delete &wifiClient;
}

void EspWifiClient::setup()
{
    wifiClient = WiFiClient();

    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("WiFi connected at IP address: ");
    Serial.println(WiFi.localIP());
}

String EspWifiClient::getLocalIP()
{
    return WiFi.localIP().toString();
}

WiFiClient *EspWifiClient::getWifiClient()
{
    return &wifiClient;
}

// Method to get device name
String EspWifiClient::getDeviceName()
{
    String deviceName = DEVICE_NAME_PREFIX;
    deviceName += WiFi.macAddress();
    deviceName.replace(":", "");
    return deviceName;
}