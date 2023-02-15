import QtQuick 2.3

Rectangle{
    property alias placeholderText: placeholderText.text
    property string defaultColor: "#32343A"
    property string borderColor: "#32343A"
    property string borderHoverColor: "red"
    property int moustState: 0
    property int paddingValue: 24
    id: root
    color: defaultColor
    border.color: defaultColor
    border.width: 2
    radius: height / 2

    TextInput{
        x: parent.paddingValue
        width: (parent.width - paddingValue * 2) - (fold.visible ? fold.width : 0)
        height: parent.height
        id: input
        color: "white"
        font.pixelSize: 14
        verticalAlignment:  Text.AlignVCenter
        selectByMouse:  true
        selectedTextColor: "black"
        clip: true
        onFocusChanged: focus ? parent.moustState = 1 : parent.moustState = 0
        Text {
            id: placeholderText
            anchors.fill: parent
            color: "#99A0A3"
            visible: !parent.text
            verticalAlignment:  parent.verticalAlignment
            font: parent.font
        }
        selectionColor: "#ff00eec1"
    }
    Image{
        id: fold
        x: parent.width - width - paddingValue
        y: (parent.height - height) / 2
        width: 12
        height: 12
        source: "qrc:/common/common/fold.png"
    }

    onMoustStateChanged: {
        console.log("onMoustStateChanged" + moustState)
        border.color=( moustState == 0 ? defaultColor : borderHoverColor)
    }
}
    
