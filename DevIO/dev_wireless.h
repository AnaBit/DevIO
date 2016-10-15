#pragma once 

#include "devio.h"

#include <string>


class DevWrieless : public Devio {
public:
    DevWrieless();
    ~DevWrieless();
    
public:
    std::string & ssid() const;
    
    /**
     * mac addr fmt XX:XX:XX:XX:XX:XX
     */
    std::string & mac() const;
};
