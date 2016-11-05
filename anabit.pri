# -----------------------------------------------------------------------------
# include(config.pri)
# -----------------------------------------------------------------------------
# >>>> usr ANABIT
# -----------------------------------------------------------------------------
# Author     : AnaBit
# Department : Middle Ware
# Date       : 2015.12.16
# e-meil     : shaojun@hangsheng.com.cn

# -----------------------------------------------------------------------------
# compile options
CONFIG *= c++11

# -----------------------------------------------------------------------------
# platform define
# ATP platform
linux-oe-g++ {

DEFINES += ATP_PLATFORM
INCLUDEPATH_MODULE_COMMON_PLATFORM = \
    /home/atropos/ATP_BSP/ivi/build/tmp/sysroots/mx6q/usr/include \
    /home/atropos/ATP_BSP/MentorGraphics/Sourcery_CodeBench_for_ARM_Embedded/arm-none-linux-gnueabi/include/c++/4.8.3/

LIBS_MODULE_COMMON_PLATFORM = \
    -L/home/atropos/ATP_BSP/ivi/build/tmp/sysroots/mx6q/usr/lib \

target.path=/home/root/AnaBit
INSTALLS += target

# -----------------------------------------------------------------------------
# ubuntu platform
} else {
DEFINES += "_GLIBCXX_USE_CXX11_ABI=0"
DEFINES += UBUNTU_PLATFORM
INCLUDEPATH_MODULE_COMMON_PLATFORM = \
}
# linux-oe-g++

# -----------------------------------------------------------------------------
# LIBS include path
# add symbol "-L"
# ATP platform
linux-oe-g++ {

INCLUDEPATH += \
    /home/atropos/Application/ATP/sysroots/cortexa9hf-vfp-neon-mel-linux-gnueabi/usr/include/glib-2.0/ \
    /home/atropos/Application/ATP/sysroots/cortexa9hf-vfp-neon-mel-linux-gnueabi/usr/lib/glib-2.0/include/ \
    /home/atropos/Application/ATP/sysroots/cortexa9hf-vfp-neon-mel-linux-gnueabi/usr/include/gio-unix-2.0 \

LIBS += \
    -lglib-2.0 \
    -lgio-2.0 \
    -lgobject-2.0 \

# -----------------------------------------------------------------------------
# ubuntu platform
} else {

INCLUDEPATH += \
    /usr/include/glib-2.0/ \
    /usr/lib/x86_64-linux-gnu/glib-2.0/include/ \
    /usr/include/gio-unix-2.0/


LIBS += \
    -lglib-2.0 \
    -lgio-2.0 \
    -lgobject-2.0 \

} # linux-oe-g++

# -----------------------------------------------------------------------------
# module config
INCLUDEPATH_MODULE_COMMON = \
    src

LIBS_MODULE_COMMON = \
    -lpthread

# -----------------------------------------------------------------------------
# qmake config

INCLUDEPATH += $${INCLUDEPATH_MODULE_COMMON_PLATFORM}
INCLUDEPATH += $${INCLUDEPATH_MODULE_COMMON}

LIBS        += $${LIBS_MODULE_COMMON}
LIBS        += $${LIBS_MODULE_COMMON_PLATFORM}

HEADERS += \





SOURCES += \



# -----------------------------------------------------------------------------
# <<<< ANABIT
# -----------------------------------------------------------------------------
