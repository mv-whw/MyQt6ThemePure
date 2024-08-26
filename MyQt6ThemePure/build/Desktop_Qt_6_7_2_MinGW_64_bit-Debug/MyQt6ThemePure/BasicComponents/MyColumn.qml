import QtQuick
import QtQuick.Controls.Basic
import "../"
Column {
    id: myColumn
    anchors.fill: parent

    property int realPading: 0
    property int realSpacing: 0

    onRealPadingChanged: {
        myColumn.padding=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myColumn.realPading):myColumn.realPading
    }
    onRealSpacingChanged: {
        myColumn.spacing=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myColumn.realSpacing):myColumn.realSpacing
    }
}
