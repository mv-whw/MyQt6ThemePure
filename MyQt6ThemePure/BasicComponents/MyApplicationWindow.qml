import QtQuick
import QtQuick.Controls.Basic
import "../"
ApplicationWindow{
    id: myAppWindow

    onWidthChanged: myAppWindow.checkOrientation()
    onHeightChanged: myAppWindow.checkOrientation()

    background: MyRectangle{
        color: MyTheme.defaultWindowPageBackgroundColor
    }

    function checkOrientation()
    {
        MyTheme.appWindowWidth=myAppWindow.width
        MyTheme.appWindowHeight=myAppWindow.height
        MyTheme.isInLandscapeMode=myAppWindow.width>myAppWindow.height
    }

    Component.onCompleted: {
        MyTheme.platformOS=Qt.platform.os
        myAppWindow.checkOrientation()
    }
}
