#include <Arduino.h>
#include "./_infra/EspWifiClient.h"
#include "./publishers/SerialPublisher.h"
#include "./sensors/dht20.h"

EspWifiClient espWifiClient;
SerialPublisher serialPublisher;
ISensor *dht20;


void setup()
{
    // Start serial communication
    serialPublisher.setup();

    // EspWifiClient setup
    espWifiClient.setup();

    // Dht20 setup
    dht20 = new Dht20();
    dht20->setup("DHT-20");
}

void loop()
{
    // Print to serial monitor the device name
    String deviceName = "Device name: " + espWifiClient.getDeviceName();
    serialPublisher.publish(deviceName);

    // Print to serial monitor the IP address
    String localIP = "Local IP: " + espWifiClient.getLocalIP();
    serialPublisher.publish(localIP);

    // Print to serial monitor the sensor data
    dht20->loop();
    String sensorData = "Sensor random data: " + dht20->getSensorName() + " - " + String(dht20->getData());
    serialPublisher.publish(sensorData);

    // Wait for a while
    delay(1000);
}