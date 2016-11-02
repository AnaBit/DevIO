TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    DevIO/main.cpp

HEADERS += \
    DevIO/devio.h \
    DevIO/dev_wireless.h \
    DevIO/ltectrl.h \
    DevIO/devbase.h
