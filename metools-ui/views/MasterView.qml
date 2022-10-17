import QtQuick 2.15
import QtQuick.Window 2.12
import QtQuick.Controls 2.2
import assets 1.0
import components 1.0
import Qt.labs.platform


Window {
    id: window
    visible: true
    width:300
    height:300
    title: qsTr("MeTools")

    SystemTrayIcon {
        visible: true
        icon.source: "qrc:/assets/logo.ico"

        onActivated: {
            window.show()
            window.raise()
            window.requestActivate()
        }
    }

    Connections{
        target: window
        function onWindowStateChanged(windowState){
            if(windowState===Qt.WindowMinimized)window.hide()
        }
    }

    Rectangle{
        anchors.fill: parent
        anchors.margins: 20
        Column{
            spacing:10
            Repeater {
                id: commandRepeater
                model:masterController.ui_commandController.ui_workAreaViewCommands
                delegate: SwitchButton {
                    width:100
                    height:50
                    command: modelData
                }

            }
        }
    }

}
