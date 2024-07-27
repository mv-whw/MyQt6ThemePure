import QtQuick
import "../BasicComponents"
import "../"
MyRectangle {
    id: myTabControlHorNormal
    width: parent.width
    realHeight: MyTheme.normalTabControlHorHeight

    property bool allowClosingTabs: true
    property int selectedTabIndex: -1
    property int closingTabIndex: -1

    signal closingTab()

    MyFlickable
    {
        contentWidth: myNormalControlHorRow.width
        flickVertical: false
        MyRow
        {
            id: myNormalControlHorRow
            property MyNormalTab tabs: []

            realSpacing: 1
            realPading: 0
            height: parent.height

        }
    }


    function addTab(title: string, iconPath:string, selected=false):bool
    {
        if(title==="")
            return false
        let qTabString=""
        //myNormalControlHorRow.tabs.push(Qt.createQmlObject())
    }

    function deleteTab(index: int):bool
    {
        let n=myNormalControlHorRow.tabs.length
        if(n===0 || index<0 || index>(n-1))
            return false
        myTabControlHorNormal.closingTabIndex=index
        myTabControlHorNormal.closingTab()
        myNormalControlHorRow.tabs[index].destroy()
        let tmp1=myNormalControlHorRow.tabs.slice(0,index)
        let tmp2=myNormalControlHorRow.tabs.slice(index+1)
        myNormalControlHorRow.tabs= tmp1.concat(tmp2)
    }
}
