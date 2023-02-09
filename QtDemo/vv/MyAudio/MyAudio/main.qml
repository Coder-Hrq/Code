import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 1000
    height: 670
    title: qsTr("登录界面")
    id: loginWindow
    
    Rectangle{
        id: leftRect
        anchors.fill: parent
        color: "#212426"
        radius: 6
    }

   Image{
        id: iconImg
        x: 32
        y: 24
        width: 59
        height: 25
        source: "login/login/ico_qm.png"
    }

    Image{
        id: logoImg
        x: 73
        y: 116
        width: 66
        height: 66
        source: "login/login/loginLogo.png"
    }

    Image{
        id: rightImage
        x: parent.width/2
        width: parent.width / 2
        height: parent.height
        source: "login/login/bg_dlzc.png"
    }
}
