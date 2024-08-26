import QtQuick
import QtQuick.Controls.Basic
import "../"
Frame {
    id: myFrame
    property alias borderColor: myBcgRect.color
    property color frameBackgroundColor: MyTheme.defaultFrameBackgroundColor
    default property alias frameElements: myFrameCol.children
    background: MyRectangle{
        id: myBcgRect
        border.color: MyTheme.useDarkTheme? "white":"black"
        realBorderWidth: 1
        realRadius: 10
        color: "transparent"
    }

    MyColumn{
        id: myFrameCol

    }
}
