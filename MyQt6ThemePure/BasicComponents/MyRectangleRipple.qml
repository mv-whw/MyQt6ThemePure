import QtQuick
import "../"
MyRectangle {
    id: myRect

    property alias changeCursor: myRippleMouseArea.changeCursor
    property alias enableRightMouseButton: myRippleMouseArea.enableRightMouseButton
    property alias changeColorOnHoverToDarker: myRippleMouseArea.changeColorOnHoverToDarker
    property alias hoverEnabled: myRippleMouseArea.hoverEnabled

    signal clicked()
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

    /*MyRippleMouseArea{
        id: myRmA
        rippleRectangle: rippleRect
        onLeftClicked: myRect.leftClicked()
        onRightClicked: myRect.rightClicked()
        onEntered: myRect.entered()
        onExited: myRect.exited()
    }*/
    MyMouseArea{
        id: myRippleMouseArea
        property alias parentBaseColor: myRect.color
        property bool isHoverred: false

        /*Component.onCompleted: {
            myRippleMouseArea.parentBaseColor=myRect.color
        }*/


        onClicked: {
            rippledEffect.start()
            myRect.clicked()
        }
        onLeftClicked: myRect.leftClicked()
        onRightClicked: myRect.rightClicked()
        onEntered: {
            myRippleMouseArea.isHoverred=true
            myRect.entered()
        }
        onExited: {
            myRippleMouseArea.isHoverred=false
            myRect.exited()
        }

        PropertyAnimation
        {
            id: rippledEffect
            target: myRippleMouseArea.rippleRectangle
            duration: 250
            property: "width"
            from:0
            to: Math.max(myRect.width,myRect.height)*1.7
            loops: 1
            onStarted: {
                if(myRect.color===myRippleMouseArea.parentBaseColor)
                    rippleRect.color=Qt.darker(myRippleMouseArea.parentBaseColor,1.2)
                else
                    rippleRect.color=myRippleMouseArea.parentBaseColor
            }

            onStopped: {
                rippleRect.width=0
            }
        }
    }

}
