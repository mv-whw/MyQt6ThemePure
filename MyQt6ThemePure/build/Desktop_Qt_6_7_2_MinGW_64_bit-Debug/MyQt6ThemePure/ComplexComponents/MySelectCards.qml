import QtQuick
import "../BasicComponents"
import "../"

MyRectangleRipple {
    id: myCard

    realRadius: 10
    property alias cardIconSource: myCardIcon.source
    property alias cardIconColor: myCardIcon.colorizationColor
    property alias cardTitle: myCardLabel.text

    signal clicked()

    changeCursor: true
    hoverEnabled: MyTheme.isDesktop

    onEntered: {
        if(hoverEnabled)
        {
            if(myCardIconAnimationExited.running)
                myCardIconAnimationExited.stop()
            myCardIconAnimationEntered.start()
        }
    }
    onExited: {
        if(hoverEnabled)
        {
            if(myCardIconAnimationEntered.running)
                myCardIconAnimationEntered.stop()
            myCardIconAnimationExited.start()
        }
    }

    MyColumn{
        anchors.centerIn: parent
        MyIcon{
            id: myCardIcon
            useSourceSize: false
            height: myCard.height/5*3
            anchors.horizontalCenter: parent.horizontalCenter
        }
        MyLabel{
            id: myCardLabel
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    NumberAnimation{
        id: myCardIconAnimationEntered
        target: myCardIcon
        property: "height"
        from: myCardIcon.height
        to: (myCard.height/5*3)*1.15
        duration: 250
    }
    NumberAnimation{
        id: myCardIconAnimationExited
        target: myCardIcon
        property: "height"
        from: myCardIcon.height
        to: myCard.height/5*3
        duration: 250
    }
}
