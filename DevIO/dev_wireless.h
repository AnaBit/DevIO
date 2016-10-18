#pragma once 

#include "devio.h"

#include <string>
#include <functional>


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

class DevLTE : public Devio {
public:
    DevLTE();
    ~DevLTE();

public:
    std::string ICCID();
    std::string phoneNum();


    bool dial(const std::string & number);
    void handup();

    void setDialStatusFunc(std::function<void()>);
};
