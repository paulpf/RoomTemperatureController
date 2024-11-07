// SerialPublisher.h

#include "../_interfaces/IPublisher.h"

#ifndef SERIAL_PUBLISHER_H
#define SERIAL_PUBLISHER_H

class SerialPublisher : public IPublisher
{
public:
    SerialPublisher();
    ~SerialPublisher();
    void setup();
    void publish();
    
private:
    static SerialPublisher *instance; // Static pointer to the instance
};

#endif // SERIAL_PUBLISHER_H