import QtQuick
import QtQuick.Controls.Basic
import "../"
ProgressBar {
    id: myProgressBar

    background: MyRectangle {
        implicitWidth: MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*150):150
        implicitHeight: MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*8):8
        color: MyTheme.defaultProgresBarBackgroundColor
        radius: implicitHeight/2
    }

    contentItem: Item {
        implicitWidth: myProgressBar.background.implicitWidth
        implicitHeight: myProgressBar.background.implicitHeight-2

        Rectangle {
            width: myProgressBar.visualPosition * parent.width
            height: parent.height
            radius: 2
            color: MyTheme.defaultProgresBarFinishedColor
        }
    }

}
