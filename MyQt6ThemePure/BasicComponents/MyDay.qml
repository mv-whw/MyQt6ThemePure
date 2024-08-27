import QtQuick
import "../"


MyRectangle {
    id: myDay
    property string dayValue: ""
    property bool isSelectedDay: false
    property bool isCurrentDay: false
    property alias textFontSize: myDayText.fontSize

    border.color: MyTheme.useDarkTheme? "white":"black"
    realBorderWidth: myDay.isSelectedDay? 2:0

    MyLabel{
        id: myDayText
        anchors.centerIn: parent
        text: myDay.dayValue
        isBold: myDay.isCurrentDay
    }
}
