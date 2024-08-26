import QtQuick
import QtQuick.Controls.Basic
import "../"
GroupBox {
    id: myGroupBox
    default property alias groupElements: myGrupboxCol.children

    background: MyRectangle{
        y: (myGroupBox.topPadding-myGroupBox.bottomPadding)*(MyTheme.useDpValues? MyTheme.dpIndex:1)
        width: parent.width
        height: parent.height-(myGroupBox.topPadding+myGroupBox.bottomPadding)*(MyTheme.useDpValues? MyTheme.dpIndex:1)
        color: "transparent"
        border.color: MyTheme.useDarkTheme? "white":"black"
        realBorderWidth: 1
        realRadius: 10
    }

    label: MyLabel{
        x: myGroupBox.leftPadding * (MyTheme.useDpValues? MyTheme.dpIndex:1)
        width: myGroupBox.availableWidth
        text: myGroupBox.title
        elideModeEnabled: true
    }

    MyColumn{
        id: myGrupboxCol

    }
}
