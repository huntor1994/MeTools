pragma Singleton
import QtQuick
import QtQml.Models
Item {

    FontLoader{
        id:fontAwesomeLoader
        source: "qrc:/assets/fontawesome.ttf"
    }

    property alias fontAwesome: fontAwesomeLoader.name
    readonly property color colourBackground: "#efefef"

    readonly property int windowRadius: 7
    readonly property int windowWidth: 1090
    readonly property int windowHeight: 787




}


