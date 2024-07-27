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
    required property bool isHorizontalTabControl
    required property bool usingClasicTabs

    color: "transparent"

    MyFlickable{
        id: myTabControlFlick
        property var tabsParent: myTabControl.isHorizontalTabControl? myTabControlRow:myTabControlColumn
        MyRow{
            id: myTabControlRow
            visible: myTabControl.isHorizontalTabControl
        }
        MyColumn{
            id: myTabControlColumn
            visible: !myTabControl.isHorizontalTabControl
        }
    }

    function addTab(title: string, icon:string):bool
    {

    }
    function deleteTab(index: int): bool
    {

    }
}
