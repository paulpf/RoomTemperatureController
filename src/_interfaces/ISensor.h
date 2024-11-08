// ISensor.h

#include <Arduino.h>
#ifndef I_SENSOR_H
#define I_SENSOR_H

#pragma once

class ISensor
{
public:
    virtual void setup(String sensorName) = 0;
    virtual void loop() = 0;
    virtual String getSensorName() = 0;
    virtual int getData() = 0;
};

#endif // I_SENSOR_H