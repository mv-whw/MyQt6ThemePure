import QtQuick
import QtQuick.Controls.Basic
import "../"
Flow {
    id: myFlow


    property int realPading: 0
    property int realSpacing: 0

    onRealPadingChanged: {
        myFlow.padding=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myFlow.realPading):myFlow.realPading
    }
    onRealSpacingChanged: {
        myFlow.spacing=MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*myFlow.realSpacing):myFlow.realSpacing
    }
}
