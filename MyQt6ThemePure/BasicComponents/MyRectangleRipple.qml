import QtQuick
import "../"
MyRectangle {
    id: myRect
    clip: true


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
        height: 0
        anchors.centerIn: parent
        color: (myRect.changeColorOnHoverToDarker? Qt.darker(myRect.color,1.2):Qt.lighter(myRect.color,1.2))
    }


    MyMouseArea{
        id: myRippleMouseArea

        property bool isHovered: false

        onIsHoveredChanged: {
            if(myRect.hoverEnabled)
            {
                if(!rippledEffect.running)
                {
                    if(rippleRect.width!==myRect.width)
                        rippleRect.width=myRect.width
                    if(rippleRect.height!==myRect.height)
                        rippleRect.height=myRect.height
                    if(rippleRect.radius!==myRect.radius)
                        rippleRect.radius=myRect.radius
                    if(!rippleRect.visible)
                        rippleRect.visible=true
                }
            }
            if(!myRippleMouseArea.isHovered)
                rippleRect.visible=false
        }

        onClicked: {
            rippledEffect.start()
            myRect.clicked()
        }
        onLeftClicked: myRect.leftClicked()
        onRightClicked: myRect.rightClicked()
        onEntered: {
            myRippleMouseArea.isHovered=true
            myRect.entered()
        }
        onExited: {
            myRippleMouseArea.isHovered=false
            myRect.exited()
        }

        PropertyAnimation
        {
            id: rippledEffect
            target: rippleRect
            duration: 250
            properties: ["width","height"]
            from:0
            to: Math.max(myRect.width,myRect.height)*1.7
            loops: 1
            onStarted: {
            }

            onStopped: {
                if(myRect.hoverEnabled && myRippleMouseArea.isHovered)
                {
                    rippleRect.width=myRect.width
                    rippleRect.height=myRect.height
                }
                else
                    rippleRect.visible=false
            }
        }
    }

}

/*
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


    MyMouseArea{
        id: myRippleMouseArea
        property alias parentBaseColor: myRect.color
        property bool isHoverred: false


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
            target: rippleRect
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
*/
