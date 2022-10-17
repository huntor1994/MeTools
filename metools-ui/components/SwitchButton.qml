import QtQuick 2.15
import METOOLS 1.0
Item {
    property Command command
    width:backgroundWidth
    height:backgroundHeight

    property int backgroundWidth: width
    property int backgroundHeight: height
    property int backgroundRadius: backgroundHeight/2
    property color switchOnColor: "#52c37c"
    property color switchOffColor: "#a5a5a5"

    property int sliderMargin: 2
    property color sliderColor: "#ffffff"
    signal switchButtonClicked()
    Rectangle{
        id:background
        radius: backgroundRadius
        width:backgroundWidth
        height:backgroundHeight
        color: switchOffColor
        Rectangle{
            id:slider

            width:backgroundWidth/1.5
            height:backgroundHeight-sliderMargin*2
            radius: height/2
            color: sliderColor
            anchors{
                id:sliderAnchors
                verticalCenter: parent.verticalCenter
                left: parent.left
                leftMargin: sliderMargin
            }
        }
        states: [
            State{
                name:"on"
                PropertyChanges {
                    target: background
                    color: switchOnColor
                }
                PropertyChanges {
                    target: sliderAnchors
                    leftMargin: backgroundWidth-sliderMargin-slider.width
                }
            },
            State{
                name:"off"
                PropertyChanges {
                    target: background
                    color: switchOffColor
                }
                PropertyChanges {
                    target: sliderAnchors
                    leftMargin: sliderMargin
                }

            }
        ]
        MouseArea{
            id:mouseArea
            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor
            hoverEnabled: true
            onClicked: {
                if(command.ui_canExecute) {
                    command.executed(!(background.state==="on"));
                    background.state = background.state==="on"?"off":"on"
                    switchButtonClicked();
                }
            }

        }
    }
}
