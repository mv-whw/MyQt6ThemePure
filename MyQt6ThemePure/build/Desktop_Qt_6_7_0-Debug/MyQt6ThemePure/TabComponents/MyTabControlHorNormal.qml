import QtQuick
import "../BasicComponents"
import "../"
MyTabControl {
    id: myTabControlHorizontalNormal
    realHeight: MyTheme.normalTabControlHorHeight

    color: "lightblue"

    property int widthOfTab: MyTheme.normalTabButtonHorWidth

    //readonly property alias tabsCount: myNorHorTabContainer.children.length

    MyFlickable{
        id: myNorHorFlick
        flickVertical: false
        contentWidth: myNorHorTabContainer.width
        property var normalTabs: []
        property Component com: Qt.createComponent("MyNormalTab.qml")
        MyRow{
            id: myNorHorTabContainer
        }
        // Component.onCompleted: {
        //     com.color=com.isSelected? myTabControlHorizontalNormal.selectedTabColor:myTabControlHorizontalNormal.notSelectedTabColor
        //     com.tabTitleColor= com.isSelected? myTabControlHorizontalNormal.selectedTextAndIconColor:myTabControlHorizontalNormal.notSelectedTextAndIconColor
        //     com.tabIconColorizationColor=com.tabTitleColor
        // }
    }



    function addTab(title: string, iconSource:string, isSelected:bool): bool
    {
        var comSet={
            "tabTitle":title,
            "tabIconSource":iconSource,
            "enableClosing":true,
            "realWidth":myTabControlHorizontalNormal.widthOfTab,
            "height":myTabControlHorizontalNormal.height,
            "realRadius":10,
            "bottomLeftRadius":0,
            "bottomRightRadius":0,
            "realBorderWidth":1,
            "border.color":"black",
            "selectedTabColor":myTabControlHorizontalNormal.selectedTabColor,
            "notSelectedTabColor":myTabControlHorizontalNormal.notSelectedTabColor,
            "notSelectedTabTitleColor":myTabControlHorizontalNormal.notSelectedTextAndIconColor,
            "selectedTabTitleColor":myTabControlHorizontalNormal.selectedTextAndIconColor

        }
        myNorHorFlick.normalTabs.push(myNorHorFlick.com.createObject(myNorHorTabContainer,comSet))
    }


    function deleteTab(index:int): bool
    {
        // myNorHorTabContainer.children[index].destroy()
        // myNorHorFlick.normalTabs.pop()

        // console.log("del mynormalTabsCount: "+myNorHorFlick.normalTabs.length)
        // console.log("del mynorhorContainCOunt: "+myNorHorTabContainer.children.length)
    }

    Timer
    {
        id: tim
        interval: 0
        onTriggered: console.log("test")
    }
}
