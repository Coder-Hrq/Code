import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.12

import QtQuick 2.0
import QtGraphicalEffects 1.12

import global.item 1.0

FramelessWindow {
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: mainWindow
    visible: true
    modality: Qt.WindowModal
    minimumWidth: 100
    minimumHeight: 100
    //color: Qt.rgba(255, 255, 255, 0.01)

    
    MouseArea {
        anchors.fill: parent
        id: mouseWindow
        property int mx: 0
        property int my: 0  
        property bool bMove: false 
        hoverEnabled: true
        onEntered:{
            bMove = false
        }
        onExited:{
            bMove = false
        }
        onPressed: {
            mx = mouseX
            my = mouseY
            bMove = true
        }
        onReleased: {
            bMove = false
        }

        onPositionChanged: {
            if (bMove){
                mainWindow.x+=mouseX-mx
                mainWindow.y+=mouseY-my
            }
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
}
