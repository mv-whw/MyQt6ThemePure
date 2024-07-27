import QtQuick
import "../BasicComponents"
import "../"

MyTab
{
    id: myNormalTab

    property bool enableClosing: false

    signal close()

    MyRow
    {
        realPading: 5
        realSpacing: 5
        anchors.centerIn: parent
        MyIcon
        {
            id: myNormalTabIcon
            useSourceSize: false
            height: myNormalTab.height-parent.padding*2
            source: myNormalTab.tabIconSource
            visible: (source!=="")
            colorizationColor: myNormalTab.tabIconColorizationColor
        }
        MyLabel
        {
            id: myNormalTabLabel
            elideModeEnabled: true
            width: myNormalTab.width-parent.padding*2-(myNormalTabIcon.visible? myNormalTabIcon.width+parent.padding:0)-(myNormalTabCloseRect.visible? myNormalTabCloseRect.width+parent.padding:0)
            text: myNormalTab.tabTitle
            color: myNormalTab.tabTitleColor
        }
        MyRectangle
        {
            id: myNormalTabCloseRect
            visible: myNormalTab.enableClosing
            height: myNormalTabIcon.height
            width: height
            border.color:MyTheme.useDarkTheme? "white":"black"
            color: "transparent"
            realBorderWidth: 0

            MyLabel{
                anchors.centerIn: parent
                text: "X"
                isBold: true
                color: "black"
            }

            MyMouseArea{
                hoverEnabled: true
                onEntered: {
                    parent.color=MyTheme.useDarkTheme? "lightgrey": "white"
                    parent.realBorderWidth=1
                }
                onExited: {
                    parent.color="transparent"
                    parent.realBorderWidth=0
                }
                onClicked: myNormalTab.close()
            }
        }
    }
}
