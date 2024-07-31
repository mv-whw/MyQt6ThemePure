import QtQuick
import "../BasicComponents"
import "../"

/*MyRectangleRipple {
    id: myTab
    property string tabIconSource: ""
    property string tabTitle: ""
    property string badgeValue: ""
    property bool isSelected: false
    property color tabIconColorizationColor: myTab.isSelected? selectedTabTitleColor:notSelectedTabTitleColor
    property color selectedTabTitleColor: "white"
    property color notSelectedTabTitleColor: "dodgerblue"
    property color notSelectedTabColor: "dodgerblue"
    property color selectedTabColor: "white"
    property string ownerName: ""

    signal selectedItem()
}*/
MyRectangle {
    id: myTab
    property string tabIconSource: ""
    property string tabTitle: ""
    property string badgeValue: ""
    property bool isSelected: false
    property color tabIconColorizationColor: myTab.isSelected? selectedTabTitleColor:notSelectedTabTitleColor
    property color selectedTabTitleColor: "white"
    property color notSelectedTabTitleColor: "dodgerblue"
    property color notSelectedTabColor: "dodgerblue"
    property color selectedTabColor: "white"
    property string ownerName: ""

    signal selectedItem()
}
