import QtQuick
import "../BasicComponents"
import "../"



MyTab
{
    id: myNormalTab

    property bool enableClosing: false
    clip: true
    signal close()
    color: myNormalTab.isSelected? myNormalTab.selectedTabColor:myNormalTab.notSelectedTabColor

    MyMouseArea{
        hoverEnabled: false
        onClicked: {
            if(!myNormalTab.isSelected)
            {
                myNormalTab.selectedItem()
                myNormalTab.isSelected=true
            }
        }
    }

    MyRow
    {
        id: mynRo2
        realPading: 5
        topPadding: 0
        bottomPadding: 0
        realSpacing: 5
        anchors.centerIn: parent
        MyIcon
        {
            id: myNormalTabIcon
            useSourceSize: false
            anchors.verticalCenter: parent.verticalCenter
            height: myNormalTabLabel.height
            source: myNormalTab.tabIconSource
            visible: (source!=="")
            colorizationColor: myNormalTab.tabIconColorizationColor
            colorization: 1.0
        }
        MyLabel
        {
            id: myNormalTabLabel
            anchors.verticalCenter: parent.verticalCenter
            elideModeEnabled: true
            width: myNormalTab.width-(parent.leftPadding+parent.rightPadding+(myNormalTabIcon.visible? myNormalTabIcon.width+parent.spacing:0)+(myNormalTabCloseRect.visible? myNormalTabCloseRect.width+parent.spacing:parent.spacing))
            //myNormalTab.width-parent.leftPadding-parent.rightPadding-(myNormalTabIcon.visible? myNormalTabIcon.width+parent.spacing:0)-(myNormalTabCloseRect.visible? myNormalTabCloseRect.width+2*parent.spacing:parent.spacing)
            text: myNormalTab.tabTitle
            color: myNormalTab.isSelected? myNormalTab.selectedTabTitleColor:myNormalTab.notSelectedTabTitleColor
            isBold: myNormalTab.isSelected
        }

    }
    MyRectangle
    {
        id: myNormalTabCloseRect
        visible: myNormalTab.enableClosing && myNormalTab.isSelected
        height: myNormalTabLabel.height
        anchors.verticalCenter: parent.verticalCenter
        clip: true
        width: height
        x: parent.width-myNormalTabLabel.parent.rightPadding-width
        border.color:MyTheme.useDarkTheme? "white":"black"
        color: "transparent"
        border.width: 0
        radius: height/5

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

