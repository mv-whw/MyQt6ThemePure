import QtQuick
import QtQuick.Controls.Basic
import "../"
MyRectangle{
    id: myBusyIndicator
    color: "transparent"
    clip: true
    visible: false

    realHeight: MyTheme.busyIndicatorHeight
    realWidth: (myBusyIndicator.realHeight*4+3*6)*2

    readonly property alias running: busyIndicatorAnimation.running

    onVisibleChanged: {
        if(myBusyIndicator.visible)
            myBusyIndicator.start()
        else
            myBusyIndicator.stop()
    }

    MyRectangle{
        id: r1
        x:-4*r1.height-3*6
        y:0
        color: MyTheme.colorOfBusyIndicatorItems
        realHeight: MyTheme.busyIndicatorHeight
        realWidth: realHeight
        realRadius: realHeight
    }
    MyRectangle{
        id: r2
        x:-3*r1.height-2*6
        y:0
        color: MyTheme.colorOfBusyIndicatorItems
        realHeight: MyTheme.busyIndicatorHeight
        realWidth: realHeight
        realRadius: realHeight
    }
    MyRectangle{
        id: r3
        x:-2*r1.height-1*6
        y:0
        color: MyTheme.colorOfBusyIndicatorItems
        realHeight: MyTheme.busyIndicatorHeight
        realWidth: realHeight
        realRadius: realHeight
    }
    MyRectangle{
        id: r4
        x:-r1.height
        y:0
        color: MyTheme.colorOfBusyIndicatorItems
        realHeight: MyTheme.busyIndicatorHeight
        realWidth: realHeight
        realRadius: realHeight
    }

    SequentialAnimation{
        id: busyIndicatorAnimation
        NumberAnimation {
            target: r4
            property: "x"
            duration: 250
            from: -r1.height
            to: 3*r1.height+3*6
        }
        NumberAnimation {
            target: r3
            property: "x"
            duration: 250
            from: -2*r1.height-1*6
            to: 2*r1.height+2*6
        }
        NumberAnimation {
            target: r2
            property: "x"
            duration: 250
            from: -3*r1.height-2*6
            to: r1.height+1*6//2*r1.height+1*6
        }
        NumberAnimation {
            target: r1
            property: "x"
            duration: 250
            from: -4*r1.height-3*6
            to: 0//r1.height
        }
        //to end
        NumberAnimation {
            target: r4
            property: "x"
            duration: 250
            from: 4*r1.height+3*6
            to: myBusyIndicator.width+r1.height
        }
        NumberAnimation {
            target: r3
            property: "x"
            duration: 250
            from: 3*r1.height+2*6
            to: myBusyIndicator.width+r1.height
        }
        NumberAnimation {
            target: r2
            property: "x"
            duration: 250
            from: 2*r1.height+1*6
            to: myBusyIndicator.width+r1.height
        }
        NumberAnimation {
            target: r1
            property: "x"
            duration: 250
            from: r1.height
            to: myBusyIndicator.width+r1.height
        }

        onStarted: {
            r1.x=-4*r1.height-3*6
            r2.x=-3*r1.height-2*6
            r3.x=-2*r1.height-1*6
            r4.x=-r1.height
        }

        loops: Animation.Infinite
    }

    function start(): void
    {
        if(!myBusyIndicator.running)
        {
            if(!myBusyIndicator.visible)
                myBusyIndicator.visible=true
            busyIndicatorAnimation.start()
        }
    }
    function stop(): void
    {
        if(myBusyIndicator.running)
        {
            if(myBusyIndicator.visible)
                myBusyIndicator.visible=false
            busyIndicatorAnimation.stop()
        }

    }
}
