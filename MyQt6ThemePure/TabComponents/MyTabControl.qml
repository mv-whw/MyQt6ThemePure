import QtQuick
import "../BasicComponents"
import "../"
MyRectangle {
    id: myTabControl
    property int selectedIndex: -1
    property bool allowClosing: false
    property color selectedTabColor: "white"
    property color notSelectedTabColor: "dodgerblue"
    property color selectedTextAndIconColor: "black"
    property color notSelectedTextAndIconColor: "white"
    // required property bool isHorizontalTabControl
    // required property bool usingClasicTabs


}
