import QtQuick
import "../BasicComponents"
import "../"
MyRectangle {
    id: myTabControl
    property int selectedIndex: -1
    property bool allowClosing: false
    property int closingTabIndex: -1
    property color selectedTabColor: "white"
    property color notSelectedTabColor: "dodgerblue"
    property color selectedTextAndIconColor: "dodgerblue"
    property color notSelectedTextAndIconColor: "white"
    // required property bool isHorizontalTabControl
    // required property bool usingClasicTabs


}
