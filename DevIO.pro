TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(anabit.pri)

SOURCES += \
    DevIO/main.cpp \
    DevIO/mdbus/ltebus/ltebus.c

HEADERS += \
    DevIO/mdbus/ltebus/ltebus.h \
    DevIO/devbase.h \
    DevIO/devio.h \
    DevIO/devkey.h \
    DevIO/devlte.h \
    DevIO/devwireless.h
