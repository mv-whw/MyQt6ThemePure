import QtQuick
import "../"
MyRectangle {
    id: myRect

    property alias changeCursor: myRmA.changeCursor
    property alias enableRightMouseButton: myRmA.enableRightMouseButton
    property alias changeColorOnHoverToDarker: myRmA.changeColorOnHoverToDarker
    property alias hoverEnabled: myRmA.hoverEnabled

    signal leftClicked()
    signal rightClicked()
    signal entered()
    signal exited()

    MyRectangle{
        id: rippleRect
        width: 0
        height: width
        radius: width
        anchors.centerIn: parent
        visible: rippleRect.width>0
    }

    MyRippleMouseArea{
        id: myRmA
        rippleRectangle: rippleRect
        onLeftClicked: myRect.leftClicked()
        onRightClicked: myRect.rightClicked()
        onEntered: myRect.entered()
        onExited: myRect.exited()
    }
}
