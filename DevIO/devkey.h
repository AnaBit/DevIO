#pragma once

#include "devbase.h"

enum class DevKeyValue {
    NO_KEY = 0,
    SRC    = 1,
    UP     = 2,
    DOWN   = 3,
    LEFT   = 4,
    RIGHT  = 5,
    SIRI   = 6,

};

class DevKey : public Devio {
public:
    DevKey();
    ~DevKey();


};
