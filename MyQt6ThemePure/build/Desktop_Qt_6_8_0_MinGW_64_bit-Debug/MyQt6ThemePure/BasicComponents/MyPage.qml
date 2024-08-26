import QtQuick
import QtQuick.Controls.Basic
import "../"


Page {
    id: myPage
    anchors.fill: parent
    background: Rectangle{
        color: MyTheme.defaultWindowPageBackgroundColor
    }

    default property alias elements: myPageCol.children//myPageFlicker.children
    MyFlickable{
        id: myPageFlicker
        topMargin: (MyTheme.isMobile && !MyTheme.isInLandscapeMode)? MyTheme.dpIndex*20:0
        leftMargin: (MyTheme.isMobile && MyTheme.isInLandscapeMode)? MyTheme.dpIndex*20:0
        anchors.centerIn: parent
        MyColumn
        {
            id: myPageCol
        }

    }
}
