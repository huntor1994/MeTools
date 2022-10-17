include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)

SOURCES += \
    source/main.cpp

RESOURCES += \
    assets.qrc \
    components.qrc \
    views.qrc

QT += quick qml
CONFIG += c++11
