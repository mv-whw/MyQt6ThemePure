import QtQuick

MyMouseArea {
    id: myRippleMouseArea
    property MyRectangle rippleRectangle: null
    readonly property bool enableRippleEffect: rippleRectangle!==null
    property color parentBaseColor: "transparent"
    readonly property bool isParentRippleRect: (typeof(myRippleMouseArea.parent)===typeof(MyRectangleRipple))


    onRippleRectangleChanged: {
        if((myRippleMouseArea.rippleRectangle!==null) && myRippleMouseArea.isParentRippleRect)
            myRippleMouseArea.parentBaseColor=myRippleMouseArea.rippleRectangle.parent.color
    }

    onClicked: {
        rippledEffect.start()
    }

    PropertyAnimation
    {
        id: rippledEffect
        target: myRippleMouseArea.rippleRectangle
        duration: 250
        property: "width"
        from:0
        to: Math.max(myRippleMouseArea.rippleRectangle.parent.width,myRippleMouseArea.rippleRectangle.parent.height)*1.7
        loops: 1
        onStarted: {
            if(myRippleMouseArea.rippleRectangle.parent.color===myRippleMouseArea.parentBaseColor)
                myRippleMouseArea.rippleRectangle.color=Qt.darker(myRippleMouseArea.parentBaseColor,1.2)
            else
                myRippleMouseArea.rippleRectangle.color=myRippleMouseArea.parentBaseColor
        }

        onStopped: {
            myRippleMouseArea.rippleRectangle.width=0
        }
    }

}

/*MouseArea {
    id: myRippleMouseArea
    property bool enableRippleEffect: true
    property color parentColor: "transparent"
    property bool forRippleUseDarkerColor: true
    property bool changeCursor: true
    property bool enableRightMouseButton: false



    signal animationEnded()

    anchors.fill: parent
    cursorShape: myRippleMouseArea.changeCursor? Qt.PointingHandCursor:Qt.ArrowCursor
    acceptedButtons: enableRightMouseButton? (Qt.LeftButton | Qt.RightButton): Qt.LeftButton

    onClicked: {
        if(myRippleMouseArea.enableRippleEffect)
            rippleAnimation.start()
        else
            myRippleMouseArea.animationEnded()
    }


    Rectangle{
        id: rippleRect
        color: myRippleMouseArea.forRippleUseDarkerColor? Qt.darker(myRippleMouseArea.parentColor,1.2):Qt.lighter(myRippleMouseArea.parentColor,1.2)
        anchors.centerIn: parent
        width: 0
        height: width
        radius: width
        visible: false
    }

    PropertyAnimation{
        id: rippleAnimation
        target: rippleRect
        property: "width"
        duration: 250
        from: 0
        to: Math.max(myRippleMouseArea.width,myRippleMouseArea.height)*1.6

        onStarted: {
            rippleRect.width=0
            rippleRect.visible=true
        }
        onStopped: {
            rippleRect.visible=false
            myRippleMouseArea.animationEnded()
        }
    }
}*/
