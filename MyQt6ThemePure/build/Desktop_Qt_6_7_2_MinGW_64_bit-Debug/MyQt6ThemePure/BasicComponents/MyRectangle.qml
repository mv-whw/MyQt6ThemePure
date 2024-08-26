import QtQuick
import "../"
Rectangle {
    id: myRectangle
    clip: true

    property int realWidth: 0
    property int realHeight: 0
    property int realRadius: 0
    property int realBorderWidth: 0

    onRealRadiusChanged: {
        myRectangle.radius=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myRectangle.realRadius):myRectangle.realRadius
    }
    onRealWidthChanged: {
        myRectangle.width=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myRectangle.realWidth):myRectangle.realWidth
    }
    onRealHeightChanged: {
        myRectangle.height=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myRectangle.realHeight):myRectangle.realHeight
    }
    onRealBorderWidthChanged: {
        myRectangle.border.width=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myRectangle.realBorderWidth):myRectangle.realBorderWidth
    }


}
