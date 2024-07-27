import QtQuick
import QtQuick.Controls.Basic
import "../"
Flow {
    id: myFlow
    anchors.fill: parent

    property int realPading: 10
    property int realSpacing: 10

    onRealPadingChanged: {
        myFlow.padding=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myFlow.realPading):myFlow.realPading
    }
    onRealSpacingChanged: {
        myFlow.spacing=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myFlow.realSpacing):myFlow.realSpacing
    }
}
