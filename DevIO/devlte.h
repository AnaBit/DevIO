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
    DialStatus dialStatus();
    void setCallbackDialStatusNotify(std::function<void(DialStatus, const std::string &)> && dialCallback);

    bool openCellularData();
    void closeCellularData();
    CellularStatus cellularStatus();
    void setCallbackCelluarStatusNotify(std::function<void(CellularStatus)> && cellularCallback);

    // fmt : 2016-11-03 18:16:55
    std::string date();
};
