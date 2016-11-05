#pragma once

#include <string>

namespace dev {
using std::string;
/**
 * @brief
 *  fmt : 2016-11-03 18:58:00
 */
class Date {
public:
    // fmt : 2016-11-03 18:58:00
    Date(const string & date);
    ~Date();

    const string & year() const;
    void setYear(const string & y);

    const string & mouth() const;
    void setMouth(const string & m);

    const string & day() const;
private:

};

}
