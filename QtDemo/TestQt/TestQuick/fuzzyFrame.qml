import QtQuick 2.12
import QtQuick.Window 2.12



    //虚边
    Rectangle{
        id: dragFram
        anchors.fill: parent
        color: Qt.rgba(255, 0, 0, 0)
        border.color: "white";
        Column{
            width:2
            height:parent.height
            spacing: 5
            clip: true
            anchors.left: parent.left
            Repeater{
                anchors.fill: parent
                model: parent.height/10
                delegate:Rectangle{
                    width: 2
                    height: 5
                    color: "black"
                }
            }
        }
        Column{
            width:2
            height:parent.height
            spacing: 5
            clip: true
            anchors.right: parent.right
            Repeater{
                anchors.fill: parent
                model: parent.height/10
                delegate:Rectangle{
                    width:2
                    height: 5
                    color: "black"
                }
            }
        }
        Row{
            width: parent.width
            height: 2
            spacing: 5
            clip: true
            anchors.top: parent.top
            Repeater{
                anchors.fill: parent
                model: parent.width/10
                delegate:Rectangle{
                    width: 5
                    height: 2
                    color: "black"
                }
            }
        }
        Row{
            width: parent.width
            height: 2
            spacing: 5
            clip: true
            anchors.bottom: parent.bottom
            Repeater{
                anchors.fill: parent
                model: parent.width/10
                delegate:Rectangle{
                    width: 5
                    height: 2
                    color: "black"
                }
            }
        }
    }


