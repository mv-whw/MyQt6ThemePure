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
        property var comonSettings: {

        }
        MyRow{
            id: myNorHorTabContainer
        }
    }



    function addTab(title: string, iconSource:string, isSelected:bool): bool
    {

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
