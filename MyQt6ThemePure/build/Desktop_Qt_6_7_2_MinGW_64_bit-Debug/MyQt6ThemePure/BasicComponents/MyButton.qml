import QtQuick
import QtQuick.Controls.Basic
import "../"
Button {
    id: myButton
    flat: (MyTheme.isIos || MyTheme.isMacOs)

    background: MyRectangle{
        realRadius: MyTheme.defaultButtonRadius
        implicitWidth: MyTheme.defaultMinimumButtonWidth
        implicitHeight: MyTheme.defaultMinimumButtonHeight
        opacity: myButton.enabled? 1:0.3
        color: myButton.flat? "transparent":(myButton.down? (Qt.darker(MyTheme.defaultButtonColor,1.4)):MyTheme.defaultButtonColor)
    }

    contentItem: MyLabel{
        color: myButton.flat? (myButton.down?  Qt.darker(MyTheme.defaultButtonColor,1.2):MyTheme.defaultButtonColor):MyTheme.defaultButtonFontColor
        isBold: true
        text: myButton.text
        opacity: myButton.enabled? 1:0.3
        elideModeEnabled: true
        horizontalAlignment: MyLabel.AlignHCenter
        verticalAlignment: MyLabel.AlignVCenter
        font.capitalization: (MyTheme.isMobile || MyTheme.isOtherOs)? Font.AllUppercase:Font.MixedCase
    }
}
