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


    //左导向tree
    Rectangle{
        smooth: true
        color: "#D0D0D0"
        height: parent.height
        width: 360

        TreeView {
            id: rootTree
            anchors.fill: parent
            model: customFileModel
            rootIndex: rootPathIndex
            selection: sel
            selectionMode: SelectionMode.SingleSelection
            property int fontSize : 16
            property string colorHover: "#e5f3ff"
            property string colorHeader: "#EBEBEB"
            property string colorBorder: "#A0A0A0"
            property string colorSelected: "#cde8ff"
            TableViewColumn{
                title: "自定义组件"
                role: "fileName"
                resizable: false
                width: rootTree.width / 2 - 1
            }
            TableViewColumn{
                title: "类似widget"
                role: "widgetName"
                resizable: false
                width: rootTree.width / 2 - 1
            }
            rowDelegate:Rectangle{
                height: rootTree.fontSize + 10
                color: !styleData.hasChildren ? "white":rootTree.colorHeader
                Shape{
                    anchors.fill: parent
                    //visible: false
                    ShapePath{
                        fillColor: parent.parent.color
                        strokeWidth: 0
                        strokeColor: rootTree.colorBorder
                        startX: width
                        startY: 0
                        PathLine{x: 0; y:0}
                        PathLine{x: 0; y:height}
                        PathLine{x: width; y:height}
                    }
                }
            }
            itemDelegate: Rectangle {
                Shape{
                    anchors.fill: parent
                    ShapePath{
                        id: shapeBg
                        fillColor: !styleData.hasChildren ? "white":rootTree.colorHeader
                        strokeWidth: 0
                        strokeColor: rootTree.colorBorder
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
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        rootTree.currentIndex = styleData.index
                        //输出某个对象所有属性
//                        for (var  prop in styleData){
//                            print(prop += " (" + typeof(styleData[prop]) + ") = " + styleData[prop]);
//                        }
                    }
                    hoverEnabled: true
                    onEntered: {
                        print("onEntered")
                        print("selected:" + styleData.selected)
                        if (!styleData.hasChildren)
                        {
                            shapeBg.fillColor = rootTree.colorHover
                        }

                    }
                    onExited: {
                        if (!styleData.hasChildren)
                        {
                            shapeBg.fillColor = "white"
                        }
                    }
                }
            }

            style: TreeViewStyle {
                branchDelegate: Rectangle {
                    color:rootTree.colorHeader
                    width: 16
                    height: rootTree.fontSize + 10 - 2
                    Image{
                        width: 16;height: 16
                        //anchors.horizontalCenter: true
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
