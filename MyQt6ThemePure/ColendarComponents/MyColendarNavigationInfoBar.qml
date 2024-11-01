import QtQuick
import "../"
import "../BasicComponents"
MyRectangle {
    id: myCalendarNavInfoBar
    realBorderWidth: 1
    border.color: "black"

    property string valueText: ""
    property bool isYearValue: false

    MyRow{
        anchors.centerIn: parent
        MyLabel{
            fontSize: 18
            text: myCalendarNavInfoBar.isYearValue? qsTr("Leto: "):qsTr("Mesec: ")
        }
        MyLabel{
            fontSize: 18
            isBold: true
            text: myCalendarNavInfoBar.valueText
        }
    }
}
