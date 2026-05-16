import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Qt Quick App"

    Text {
        anchors.centerIn: parent
        text: "Hello, Qt Quick"
        font.pixelSize: 32
    }
}
