#pragma once

#include <string>

namespace dev {
using std::string;

class Devio {
public:
    Devio() {}
    virtual ~Devio() {}

    virtual const string & HardwareModel() = 0;
    virtual const string & version() = 0;

    virtual bool open() = 0;
    virtual void close() = 0;

    /**
     * if dev is open return true else return false;
     */
    virtual operator bool() const = 0;
};

} // dev
