import QtQuick
import QtQuick.Controls.Basic
import "../"
TextArea {
    id: myTextArea

    selectByMouse: true
    wrapMode: MyTextArea.WrapAtWordBoundaryOrAnywhere
    property int fontSize: 16

    background: MyRectangle{
        color: "white"
        realRadius: 10
        realBorderWidth: myTextArea.focus? 2:1
        border.color: myTextArea.focus? "dodgerblue":"black"
    }
    font.pixelSize: MyTheme.useSpValues? Math.ceil(MyTheme.spIndex*myTextArea.fontSize):myTextArea.fontSize
}
