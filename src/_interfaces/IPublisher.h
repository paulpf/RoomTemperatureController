// IPublisher.h

#ifndef I_PUBLISHER_H
#define I_PUBLISHER_H

#include <Arduino.h>

#pragma once

class IPublisher
{
public:
    virtual void publish(String message);
};

#endif // I_PUBLISHER_H