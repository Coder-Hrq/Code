import QtQuick 2.3

Rectangle{
    property string placeholderText: "请输入账号"
    id: rLineEdit
    color: "#32343A"
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
        Text {
            anchors.fill: parent
            text: rLineEdit.placeholderText
            color: "#99A0A3"
            visible: !parent.text
            verticalAlignment:  parent.verticalAlignment
            font: parent.font
        }
    }
}
    
