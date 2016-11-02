#pragma once

// sys
#include <string>
#include <functional>

// usr
#include "devbase.h"

enum class DialStatus{
    calling,
    connected,
    handup,
    called
};

enum class CellularStatus {
    G2,
    G3,
    G4
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

    DialStatus dialStatus() const;
    void setCallbackDialStatusNotify(std::function<void(DialStatus)> && dialCallback);

    bool openCellularData();
    void closeCellularData();
};
