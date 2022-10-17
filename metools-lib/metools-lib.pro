include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)

HEADERS += \
    source/controllers/command-controller.h \
    source/controllers/master-controller.h \
    source/framework/command.h \
    source/metools-lib_global.h

SOURCES += \
    source/controllers/command-controller.cpp \
    source/controllers/master-controller.cpp \
    source/framework/command.cpp

QT -= gui
QT+=sql quick
DEFINES += METOOLSLIB_LIBRARY
TARGET=metools-lib
TEMPLATE = lib
CONFIG += c++11
DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH+=source

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =$$PWD

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DESTDIR = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR = $$PWD/build/$$DESTINATION_PATH/.ui
