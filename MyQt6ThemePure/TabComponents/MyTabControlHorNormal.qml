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
        var objButton=myNorHorFlick.com.createObject(myNorHorTabContainer,comSet)
        myNorHorFlick.normalTabs.push(objButton)
        myNorHorFlick.normalTabs[myNorHorFlick.normalTabs.length-1].selectedItem.connect(function(){
            myTabControlHorizontalNormal.setSelectedIndex(myTabControlHorizontalNormal.returnSelectedIndex(objButton))
        })
    }

    function setSelectedIndex(index:int):bool
    {
        let buttonCount=myNorHorFlick.normalTabs.length
        if(buttonCount===0)
        {
            myTabControlHorizontalNormal.selectedIndex=-1
            return true
        }
        if(index<-1 || (buttonCount-1)<index)
            return false

        for(let i=0;i<buttonCount;i++)
        {
            if(i===index)
            {
                myTabControlHorizontalNormal.selectedIndex=i
                myNorHorFlick.normalTabs[i].isSelected=true
            }else
                if(myNorHorFlick.normalTabs[i].isSelected===true)
                    myNorHorFlick.normalTabs[i].isSelected=false
        }
    }

    function returnSelectedIndex(button: MyNormalTab):int
    {
        let buttonLength=myNorHorFlick.normalTabs.length
        for(let i=0;i<buttonLength;i++)
            if(myNorHorFlick.normalTabs[i].tabTitle===button.tabTitle)
                return i
        return -1;
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
