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
            // "bottomLeftRadius":0,
            // "bottomRightRadius":0,
            "realBorderWidth":0,
            // "border.color":"black",
            "selectedTabColor":myTabControlHorSpecial.selectedTabColor,
            "notSelectedTabColor":myTabControlHorSpecial.notSelectedTabColor,
            "notSelectedTabTitleColor":myTabControlHorSpecial.notSelectedTextAndIconColor,
            "selectedTabTitleColor":myTabControlHorSpecial.selectedTextAndIconColo
        }
        let objSpecial=myTabControlHorSpecial.com.createObject(myTabHorRow,specProp)
        if(objSpecial===null)
            return false
        specialTabs.push(objSpecial)
        return true
    }

    function resizeButtons(): bool
    {
        if(myTabControlHorSpecial.specialTabs.length<1)
            return false
        let butWidth=Math.floor(myTabControlHorSpecial.width/myTabControlHorSpecial.specialTabs.length)
        if(myTabControlHorSpecial.specialTabs[0].width!==butWidth)
        {
            for(let i=0,n=myTabControlHorSpecial.specialTabs.length;i<n;i++)
                if(i!==n-1)
                    myTabControlHorSpecial.specialTabs[i].width=butWidth
                else
                    myTabControlHorSpecial.specialTabs[i].width=myTabControlHorSpecial.width-(n-1)*butWidth
        }
        return true
    }

    function setSelected(index:int): bool
    {
        let n=myTabControlHorSpecial.specialTabs.length
        if(index<0 || index>n-1)
            return false
        for(let i=0;i<n;i++)
            if(index!==i)
            {
                if(myTabControlHorSpecial.specialTabs[i].isSelected)
                    myTabControlHorSpecial.specialTabs[i].isSelected=false
            }
            else{
                if(!myTabControlHorSpecial.specialTabs[i].isSelected)
                {
                    myTabControlHorSpecial.specialTabs[i].isSelected=true
                    myTabControlHorSpecial.selectedIndex=index
                }
            }
    }
}
