import QtQuick
import "../"

MyTabControl{
    id: myTabControlHorSpecial
    realHeight: MyTheme.specialTabControlHorHeight
    width: parent.width
    property var specialTabs:[]

    function addTab(title: string, iconSource: string): bool
    {
        if(title==="" || iconSource==="")
            return false
        let comp=Qt.createComponent("MySpecialTab.qml")
    }

    function resizeButtons(): bool
    {
        return false
    }

    function setSelected(index:int)
    {

    }
}
