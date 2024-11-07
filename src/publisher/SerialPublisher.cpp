// SerialPublisher.cpp

#include "SerialPublisher.h"
#include <Arduino.h>

SerialPublisher *SerialPublisher::instance = nullptr;

SerialPublisher::SerialPublisher()
{
    instance = this;
}

SerialPublisher::~SerialPublisher()
{
    delete instance;
}

void SerialPublisher::setup()
{
    Serial.begin(115200);
    while (!Serial)
    {
        delay(10);
    }
    Serial.println("Serial publisher is ready!");
}

void SerialPublisher::publish()
{

}