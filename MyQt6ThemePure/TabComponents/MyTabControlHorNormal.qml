import QtQuick
import "../BasicComponents"
import "../"
MyTabControl {
    id: myTabControlHorizontalNormal
    realHeight: MyTheme.normalTabControlHorHeight
    width: parent.width
    color: "lightblue"
    allowClosing: true
    property int widthOfTab: MyTheme.normalTabButtonHorWidth

    onAllowClosingChanged: {
        if(myNorHorFlick.normalTabs!==null && myNorHorFlick.normalTabs.length!==0)
            if(myNorHorFlick.normalTabs.length>0)
            {
                let butCount=myNorHorFlick.normalTabs.length
                for(let i=0;i<butCount;i++)
                    myNorHorFlick.normalTabs[i].enableClosing=allowClosing
            }
    }

    MyFlickable{
        id: myNorHorFlick
        flickVertical: false
        contentWidth: myNorHorTabContainer.width
        property var normalTabs: []
        property Component com: Qt.createComponent("MyNormalTab.qml")
        MyRow{
            id: myNorHorTabContainer
        }
    }



    function addTab(title: string, iconSource:string, isSelected:bool): bool
    {
        var comSet={
            "tabTitle":title,
            "tabIconSource":iconSource,
            "enableClosing":myTabControlHorizontalNormal.allowClosing,
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
        myNorHorFlick.normalTabs[myNorHorFlick.normalTabs.length-1].close.connect(function(){
            myTabControlHorizontalNormal.deleteCurrentTab()
        })
        if(isSelected)
            myTabControlHorizontalNormal.setSelectedIndex(myNorHorFlick.normalTabs.length-1)
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
        return true
    }

    function returnSelectedIndex(button: MyNormalTab):int
    {
        let buttonLength=myNorHorFlick.normalTabs.length
        for(let i=0;i<buttonLength;i++)
            if(myNorHorFlick.normalTabs[i].tabTitle===button.tabTitle)
                return i
        return -1;
    }

    function deleteAllTabsOfOwner(ownerName:string)
    {
        //TO-DO--------------------------------------------------------------
    }

    function deleteCurrentTab():bool{
        return myTabControlHorizontalNormal.deleteTab(myTabControlHorizontalNormal.selectedIndex)
    }

    function deleteTab(index:int): bool
    {
        if(index<0 || index>(myNorHorFlick.normalTabs.length-1))
            return false
        let array1=myNorHorFlick.normalTabs.slice(0,index)
        let array2=myNorHorFlick.normalTabs.slice(index+1,myNorHorFlick.normalTabs.length)
        myNorHorTabContainer.children[index].destroy()
        myNorHorFlick.normalTabs=array1.concat(array2)
        let buttonCount=myNorHorFlick.normalTabs.length
        if(index===0)
        {
            if(buttonCount>0)
                myTabControlHorizontalNormal.setSelectedIndex(0)
        }
        else
        {
            if(index===buttonCount)
                myTabControlHorizontalNormal.setSelectedIndex(buttonCount-1)
            else
                myTabControlHorizontalNormal.setSelectedIndex(index)
        }


        return true
    }
}
