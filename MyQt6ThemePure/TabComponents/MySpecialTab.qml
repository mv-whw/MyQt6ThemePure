import QtQuick
import "../"
import "../BasicComponents"
MyTab {
    id: mySpecialTab

    MyColumn
    {
        realPading: 5
        realSpacing: 5
        anchors.centerIn: parent

        MyIcon{
            source: mySpecialTab.tabIconSource
            useSourceSize: false
            height: mySpecialTab.height/5*3
            colorizationColor: mySpecialTab.tabIconColorizationColor
        }
        MyLabel{
            text: mySpecialTab.tabTitle
            color: mySpecialTab.tabTitleColor
        }
    }

}
