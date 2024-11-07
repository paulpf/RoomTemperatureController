#include <Arduino.h>
#include "./_infra/EspWifiClient.h"
#include "./publisher/SerialPublisher.h"

EspWifiClient espWifiClient;
SerialPublisher serialPublisher;



void setup()
{
    // Start serial communication
    serialPublisher.setup();

    // EspWifiClient setup
    espWifiClient.setup();
}

void loop()
{
    // Print to serial monitor the device name
    String deviceName = "Device name: " + espWifiClient.getDeviceName();
    Serial.println(deviceName);

    // Print to serial monitor the IP address
    String localIP = "Local IP: " + espWifiClient.getLocalIP();
    Serial.println(localIP);

    // Wait for a while
    delay(1000);
}