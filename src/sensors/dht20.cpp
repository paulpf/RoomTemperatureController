// dht20.cpp

#include "dht20.h"
#include <Arduino.h>

Dht20 *Dht20::instance = nullptr;

Dht20::Dht20()
{
    instance = this;
}

Dht20::~Dht20()
{
    instance = nullptr;
}

void Dht20::setup(String sensorName)
{
    this->sensorName = sensorName;
    data = 0;
}

void Dht20::loop()
{
    data = random(0, 100);
}

String Dht20::getSensorName()
{
    return this->sensorName;
}

int Dht20::getData()
{
    return data;
}