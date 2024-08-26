import QtQuick
import QtQuick.Controls.Basic
import "../"
Label {
    id: myLabel
    property alias isBold: myLabel.font.bold
    property alias isItalic: myLabel.font.italic
    property alias isUnderlined: myLabel.font.italic
    property int fontSize: MyTheme.defaultLabelFontSize
    property color backgroundColor: "transparent"
    property bool wrapModeEnabled: false
    property bool elideModeEnabled: true


    color: MyTheme.defaultLabelFontColor
    wrapMode: myLabel.wrapModeEnabled? MyLabel.WrapAtWordBoundaryOrAnywhere:MyLabel.NoWrap
    elide: myLabel.elideModeEnabled? MyLabel.ElideRight:MyLabel.ElideNone
    background: MyRectangle{
        color: myLabel.backgroundColor    
    }

    onFontSizeChanged: {
        myLabel.font.pixelSize=MyTheme.useSpValues? Math.ceil(myLabel.fontSize*MyTheme.spIndex):myLabel.fontSize
    }
}
