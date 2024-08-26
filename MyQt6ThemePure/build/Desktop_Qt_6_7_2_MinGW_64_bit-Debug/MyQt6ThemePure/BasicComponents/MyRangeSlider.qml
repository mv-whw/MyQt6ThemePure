import QtQuick
import QtQuick.Controls.Basic
import "../"
RangeSlider {
    id: myRangeSlider
    padding: MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*10):10
    snapMode: MyRangeSlider.SnapAlways
    background: Rectangle {
        x: myRangeSlider.leftPadding
        y: myRangeSlider.topPadding + myRangeSlider.availableHeight / 2 - height / 2
        implicitWidth: 150
        implicitHeight: 40/5
        width: myRangeSlider.availableWidth
        height: implicitHeight
        radius: implicitHeight/2
        color: MyTheme.defaultSliderBackgroundColor

        Rectangle {
            x: myRangeSlider.first.visualPosition * parent.width
            width: myRangeSlider.second.visualPosition * parent.width - x
            height: parent.height
            color: MyTheme.defaultSliderProgresColor
            radius: Math.ceil(parent.height/2)
        }
    }

    first.handle: MyRectangle {
        x: myRangeSlider.leftPadding + myRangeSlider.first.visualPosition * (myRangeSlider.availableWidth - width)
        y: myRangeSlider.topPadding + myRangeSlider.availableHeight / 2 - height / 2
        implicitWidth: 40/10*7
        implicitHeight: implicitWidth
        radius: implicitWidth/2
        color: myRangeSlider.first.pressed ? "#f0f0f0" : "#f6f6f6"
        border.color: "#bdbebf"
        realBorderWidth: 1
    }

    second.handle: MyRectangle {
        x: myRangeSlider.leftPadding + myRangeSlider.second.visualPosition * (myRangeSlider.availableWidth - width)
        y: myRangeSlider.topPadding + myRangeSlider.availableHeight / 2 - height / 2
        implicitWidth: 40/10*7
        implicitHeight: implicitWidth
        radius: implicitWidth/2
        color: myRangeSlider.second.pressed ? "#f0f0f0" : "#f6f6f6"
        border.color: "#bdbebf"
        realBorderWidth: 1
    }
}
