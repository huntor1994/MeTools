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
RC_ICONS = logo.ico
INCLUDEPATH+=source\
            ../metools-lib/source

DEFINES += QT_DEPRECATED_WARNINGS
LIBS += -L$$PWD/../binaries/$$DESTINATION_PATH -lmetools-lib
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
