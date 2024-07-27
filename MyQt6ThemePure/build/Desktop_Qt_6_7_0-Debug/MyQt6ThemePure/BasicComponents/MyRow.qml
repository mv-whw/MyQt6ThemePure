import QtQuick
import QtQuick.Controls.Basic
import "../"
Row {
    id: myRow
    anchors.fill: parent

    property int realPading: 10
    property int realSpacing: 10

    onRealPadingChanged: {
        myRow.padding=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myRow.realPading):myRow.realPading
    }
    onRealSpacingChanged: {
        myRow.spacing=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myRow.realSpacing):myRow.realSpacing
    }
}
