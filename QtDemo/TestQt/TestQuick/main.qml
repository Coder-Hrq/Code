import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.12

import QtQuick 2.0
import QtGraphicalEffects 1.12

Window {
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: mainWindow
    color: "#00000000"
    visible: true
    modality: Qt.WindowModal
    flags: Qt.FramelessWindowHint | Qt.Window
    //color: Qt.rgba(255, 255, 255, 0.01)

    
    MouseArea {
        anchors.fill: parent
        property int mx: 0
        property int my: 0
        onPressed: {
            mx=mouseX
            my=mouseY
        }
        onPositionChanged: {
            mainWindow.x+=mouseX-mx
            mainWindow.y+=mouseY-my
        }
    }
    
    GridLayout{
        anchors.fill: parent

        Rectangle {        
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.margins: 10
            radius: 10
            color: "#404142"
        
            layer.enabled: true
            layer.effect: DropShadow {
                color: Qt.rgba(0, 0, 0, 0.9)
                samples: 21
                radius: 10
                spread: 0
            }

            Text{
                anchors.fill: parent
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment : Text.AlignVCenter
                text: "测试圆边阴影，拉伸，移动窗口"
                color: "white"
                font.pixelSize: 20

            }
        }
    }

    /*
    Rectangle{
        id: leftRect
        opacity: 0
        width: mainWindow.width  - rightRect.width
        height: mainWindow.height
    }

   Rectangle{
        id: rightRect
        opacity: 0
        x: leftRect.width
        width: 350
        height: mainWindow.height
    }
    */
}
