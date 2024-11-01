import QtQuick
import "../"
import "../BasicComponents"
MyTab {
    id: mySpecialTab


    onClicked: {
        if(!mySpecialTab.isSelected)
        {
            mySpecialTab.selectedItem()
            mySpecialTab.isSelected=true
        }
    }

    MyColumn
    {
        realPading: 5
        realSpacing: 5
        anchors.centerIn: parent

        MyIcon{
            source: mySpecialTab.tabIconSource
            useSourceSize: false
            anchors.horizontalCenter: parent.horizontalCenter
            height: mySpecialTab.height/5*3
            colorizationColor: mySpecialTab.tabIconColorizationColor
        }
        MyLabel{
            text: mySpecialTab.tabTitle
            color: mySpecialTab.tabTitleColor
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

}
