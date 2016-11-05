TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    DevIO/main.cpp \
    DevIO/mdtools/dev_type.cpp

HEADERS += \
    DevIO/devio.h \
    DevIO/dev_wireless.h \
    DevIO/devbase.h \
    DevIO/mdtools/dev_type.h \
    DevIO/devlte.h
