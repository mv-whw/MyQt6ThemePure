import QtQuick
import "../"

MyRectangle{
    id: mySwitch
    property alias checked: switcher.checked
    property bool enabled: true


    realHeight: 40
    realWidth: 2*height
    border.color: MyTheme.useDarkTheme? "white":"black"
    realBorderWidth: 1
    realRadius: 10
    color: checked? "lightgreen":"orange"
    opacity: enabled? 1.0:0.3

    MyRectangleRipple
    {
        id: switcher
        property bool checked: false
        x: checked? mySwitch.width-mySwitch.border.width-switcher.width:mySwitch.border.width
        height: parent.height-2*mySwitch.border.width
        width: mySwitch.width/2-2*mySwitch.border.width
        color: MyTheme.defaultButtonColor
        realRadius: 10
        anchors.verticalCenter: parent.verticalCenter
        opacity: mySwitch.enabled? 1.0:0.3
        onLeftClicked: {
            if(mySwitch.enabled && !switcherAnimation.running)
                switcherAnimation.start()
        }
    }



    NumberAnimation {
        id: switcherAnimation
        target: switcher
        property: "x"
        duration: 250
        from: checked? mySwitch.width-switcher.width-mySwitch.border.width:mySwitch.border.width
        to: checked? mySwitch.border.width:mySwitch.width-switcher.width-mySwitch.border.width
        onStopped: switcher.checked=!switcher.checked
    }

}
