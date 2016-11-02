#pragma once 

// sys
#include <string>
#include <functional>

// usr
#include "devbase.h"

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

class DevHostAP : public DevWrieless {
public:
    DevHostAP();
    ~DevHostAP();

public:

};
