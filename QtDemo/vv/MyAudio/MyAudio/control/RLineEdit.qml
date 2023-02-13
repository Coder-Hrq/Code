import QtQuick 2.3

Rectangle{
    property string placeholderText: "请输入账号"
    property string defaultColor: "#32343A"
    property string borderColor: "#32343A"
    property string borderHoverColor: "red"
    property int moustState: 0
    id: rLineEdit
    color: defaultColor
    border.width: 2
    border.color: "#32343A"
    radius: 28
    TextInput{
        property int paddingValue: 24
        x: paddingValue
        width: parent.width - paddingValue * 2
        height: parent.height
        id: mTextInput
        color: "white"
        font.pixelSize: 14
        verticalAlignment:  Text.AlignVCenter
        selectByMouse:  true
        clip: true
        onFocusChanged: focus ? parent.moustState = 1 : parent.moustState = 0
        Text {
            anchors.fill: parent
            text: rLineEdit.placeholderText
            color: "#99A0A3"
            visible: !parent.text
            verticalAlignment:  parent.verticalAlignment
            font: parent.font
        }
    }

    onMoustStateChanged: {
        console.log("onMoustStateChanged" + moustState)
        border.color=( moustState == 0 ? defaultColor : borderHoverColor)
    }
}
    
