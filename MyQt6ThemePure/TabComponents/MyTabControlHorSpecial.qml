import QtQuick
import "../"
import "../BasicComponents"
MyTabControl{
    id: myTabControlHorSpecial
    realHeight: MyTheme.specialTabControlHorHeight
    width: parent.width

    property var specialTabs:[]
    property Component com: Qt.createComponent("MySpecialTab.qml")

    MyRow{
        id: myTabHorRow
        width: parent.width
        height: parent.height
        realSpacing: 1
    }

    function addTab(title: string, iconSource: string): bool
    {
        if(title==="" || iconSource==="")
            return false
        let specProp={
            "tabTitle":title,
            "tabIconSource":iconSource,
            "realRadius":0,
            "bottomLeftRadius":0,
            "bottomRightRadius":0,
            "realBorderWidth":0,
            "border.color":"black",
            "selectedTabColor":myTabControlHorizontalNormal.selectedTabColor,
            "notSelectedTabColor":myTabControlHorizontalNormal.notSelectedTabColor,
            "notSelectedTabTitleColor":myTabControlHorizontalNormal.notSelectedTextAndIconColor,
            "selectedTabTitleColor":myTabControlHorizontalNormal.selectedTextAndIconColo
        }
        let objSpecial=myTabControlHorSpecial.com.createObject(myTabHorRow,specProp)
        if(objSpecial===null)
            return false
        specialTabs.push(objSpecial)
        return true
    }

    function resizeButtons(): bool
    {
        return false
    }

    function setSelected(index:int)
    {

    }
}
