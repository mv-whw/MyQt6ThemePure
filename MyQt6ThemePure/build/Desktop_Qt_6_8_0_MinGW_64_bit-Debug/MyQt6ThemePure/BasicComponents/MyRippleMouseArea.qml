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

