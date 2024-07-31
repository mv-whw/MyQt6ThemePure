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

        MyRow{
            id: myNorHorTabContainer
        }
    }



    function addTab(title: string, iconSource:string, isSelected:bool): bool
    {
        /*var component1=Qt.createComponent("MyNormalTab.qml")
        component1.tabTitle=title
        component1.tabIconSource=iconSource
        component1.realHeight=myTabControlHorizontalNormal.realHeight
        component1.realWidth=myTabControlHorizontalNormal.widthOfTab
        component1.tabTitleColor=component1.isSelected? myTabControlHorizontalNormal.selectedTextAndIconColor:myTabControlHorizontalNormal.notSelectedTextAndIconColor
        component1.tabIconColorizationColor= component1.tabTitleColor
        component1.color="lightgreen"
        var tesst=component1.createObject(myNorHorTabContainer)
        myNorHorFlick.normalTabs.push(tesst)
        */

        myNorHorFlick.normalTabs.push(Qt.createComponent("MyNormalTab.qml").createObject(myNorHorTabContainer,{"tabTitle":title,"tabIconSource":iconSource,"color":"lightgreen","realHeight":myTabControlHorizontalNormal.realHeight,"realWidth":100}))
        console.log("mynormalTabsCount: "+myNorHorFlick.normalTabs.length)
        if(myNorHorFlick.normalTabs.length===1)
            tes.target=myNorHorFlick.normalTabs[0]
        console.log("mynorhorContainCOunt: "+myNorHorTabContainer.children.length)
        return true
    }

    Connections{
        id: tes
        target: null
        function onIsSelectedChanged(){
            tim.start()
        }
    }

    function deleteTab(index:int): bool
    {
        myNorHorTabContainer.children[index].destroy()
        myNorHorFlick.normalTabs.pop()

        console.log("del mynormalTabsCount: "+myNorHorFlick.normalTabs.length)
        console.log("del mynorhorContainCOunt: "+myNorHorTabContainer.children.length)
    }

    Timer
    {
        id: tim
        interval: 0
        onTriggered: console.log("test")
    }
}
