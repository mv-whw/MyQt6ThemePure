import QtQuick
import QtQuick.Controls.Basic
import "../"
TextField {
    id: myTextField

    selectByMouse: true
    echoMode: (myTextField.isPassword && !myTextField.showPassword)? MyTextField.Password:MyTextField.Normal
    property bool isPassword: false
    property bool showPassword: false
    property int fontSize: 16
    background: MyRectangle{
        color: "white"
        realRadius: 10
        realBorderWidth: myTextField.focus? 2:1
        border.color: myTextField.focus? "dodgerblue":"black"
    }
    font.pixelSize: MyTheme.useSpValues? Math.ceil(MyTheme.spIndex*myTextField.fontSize):fontSize
}
