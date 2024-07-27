import QtQuick
import QtQuick.Controls.Basic
import "../"
CheckBox {
    id: myCheckBox
    property alias fontSize: myCheckBoxLabel.fontSize

    indicator: MyRectangle
    {
        implicitHeight: myCheckBoxLabel.height-(MyTheme.useDpValues? MyTheme.dpIndex*6:6)
        implicitWidth: implicitHeight
        x: myCheckBox.leftPadding
        y: parent.height / 2 - height / 2
        realRadius: 3
        border.color: myCheckBox.down ? "#17a81a" : "#21be2b"

        MyRectangle {
            width: parent.height/5*3
            height: width
            anchors.centerIn: parent
            radius: parent.radius/2
            color: myCheckBox.down ? "#17a81a" : "#21be2b"
            visible: myCheckBox.checked
        }
    }

    contentItem: MyLabel {
        id: myCheckBoxLabel
        text: myCheckBox.text
        opacity: enabled ? 1.0 : 0.3
        verticalAlignment: Text.AlignVCenter
        leftPadding: myCheckBox.indicator.width + (MyTheme.useDpValues? MyTheme.dpIndex*myCheckBox.spacing:myCheckBox.spacing)
    }

}
