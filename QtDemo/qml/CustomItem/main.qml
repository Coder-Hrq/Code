import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.4
import QtQml 2.12
import QtQuick.Controls 2.5
import QtQml.Models 2.2
import QtQuick.Controls.Styles 1.4
import QtQuick.Shapes 1.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ItemSelectionModel {
        id: sel
        model: fileSystemModel
    }

    Rectangle{
        color: "#D0D0D0"
        height: parent.height
        width: 400

        TreeView {
            id: rootTree
            anchors.fill: parent
            model: customFileModel
            rootIndex: rootPathIndex
            selection: sel
            property int fontSize : 16
            TableViewColumn{
                title: "自定义组件"
                role: "fileName"
                resizable: false
            }
            TableViewColumn{
                title: "类似widget"
                role: "widgetName"
                resizable: false
            }
            rowDelegate:Rectangle{
                height: rootTree.fontSize + 10
                color: "#EBEBEB"
                Shape{
                    anchors.fill: parent
                    //visible: false
                    ShapePath{
                        fillColor: "#EBEBEB"
                        strokeWidth: 0
                        strokeColor: "#A0A0A0"
                        startX: width
                        startY: 0
                        PathLine{x: 0; y:0}
                        PathLine{x: 0; y:height}
                        PathLine{x: width; y:height}
                    }
                }
            }
            itemDelegate: Rectangle {
                color: "#EBEBEB"
                Shape{
                    anchors.fill: parent
                    //visible: false
                    ShapePath{
                        fillColor: "#EBEBEB"
                        strokeWidth: 0
                        strokeColor: "#A0A0A0"
                        startX: 0
                        startY: 0
                        PathLine{x: width; y:0}
                        PathLine{x: width; y:height}
                        PathLine{x: 0; y:height}
                    }
                }
                Text {
                    id: textId
                    anchors.verticalCenter: parent.verticalCenter
                    color: styleData.textColor
                    elide: styleData.elideMode
                    text: styleData.value
                    font.pixelSize: rootTree.fontSize
                }
            }

            style: TreeViewStyle {
                branchDelegate: Rectangle {
                    color: "#EBEBEB"
                    width: 16
                    height: 16
                    Image{
                        width: 16;height: 16
                        //anchors.horizontalCenter: true
                        anchors.fill: parent
                        y: (parent.height - rootTree.fontSize) / 2
                        source: "/image/arrow.png"
                        rotation: styleData.isExpanded ? 180 : 90
                        opacity: 0.5
                    }
                }
            }
        }

    }
}
