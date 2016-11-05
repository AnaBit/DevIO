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
    const std::string & ICCID();
    const std::string & phoneNum();

    // lte call conctrl
    /**
     * @brief dial
     * @param number
     * @return bool : if call success is true
     */
    bool dial(const std::string & number);

    /**
     * @brief handup lte
     *
     */
    void handup();

    /**
     * @brief answer called
     *
     */
    void answerCalled();

    /**
     * @brief
     *
     * @param character
     * @return bool
     */
    bool dtmf(const std::string & character);


    /**
     * @brief
     *
     * @return DialStatus
     */
    DialStatus dialStatus();


    /**
     * @brief
     *
     * @param dialCallback
     */
    void setCallbackDialStatusNotify(std::function<void(DialStatus)> && dialCallback);

    /**
     * @brief
     *
     * @return bool
     */
    bool openCellularData();

    /**
     * @brief
     *
     */
    void closeCellularData();


    /**
     * @brief
     *
     * @return CellularStatus
     */
    CellularStatus cellularStatus();

    /**
     * @brief
     *
     * @param celluarCallback
     */
    void setCallbackCellularstatusNotify(std::function<void(CellularStatus)> && celluarCallback);
};
