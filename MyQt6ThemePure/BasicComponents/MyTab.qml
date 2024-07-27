import QtQuick
import "../BasicComponents"
import "../"

MyRectangleRipple {
    id: myTab
    property string tabIconSource: ""
    property string tabTitle: ""
    property string badgeValue: ""
    property bool isSelected: false
    property color tabIconColorizationColor: "black"
    property color tabTitleColor: "black"
    property string ownerName: ""
}
