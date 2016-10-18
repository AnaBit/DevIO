#pragma once 

class Devio {
public:
    Devio() {}
    virtual ~Devio() {}
    
    virtual bool open() = 0;
    virtual void close() = 0;
    
    /**
     * if dev is open return true else return false;
     */
    virtual operator bool() const = 0;
};
