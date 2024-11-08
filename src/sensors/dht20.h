// dht20.h

#ifndef DHT20_H
#define DHT20_H

#include <Arduino.h>
#include "../_interfaces/ISensor.h"

class Dht20 : public ISensor
{
public:
    Dht20();
    ~Dht20();
    void setup(String sensorName);
    void loop();
    String getSensorName();
    int getData();

private:
    static Dht20 *instance;
    String sensorName;
    int data;
};


#endif // DHT20_H
