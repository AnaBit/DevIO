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
<<<<<<< HEAD
    DevIO/devbase.h \
    DevIO/mdtools/dev_type.h \
    DevIO/devlte.h
=======
    DevIO/ltectrl.h \
    DevIO/devbase.h \
    DevIO/devkey.h
>>>>>>> 4d9f0286a4588fb205d8096e25164eb2cbcab29a
