import QtQuick
import "../"
import "../BasicComponents"
MyRectangle{
    id: myColendarNavButton
    property bool forwardDirection: false

    color: "dodgerblue"
    width: myColendarNavButtonDirection.width+(MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*30):30)
    height: myColendarNavButtonDirection.height+(MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*20):20)
    realBorderWidth: 1
    border.color: "lightblue"
    signal clicked()

    MyLabel{
        id: myColendarNavButtonDirection
        text: parent.forwardDirection? ">>":"<<"
        isBold: true
        fontSize: 18
        anchors.centerIn: parent
        color: "white"
    }

    MyMouseArea{
        onClicked: myColendarNavButton.clicked()
    }
}
