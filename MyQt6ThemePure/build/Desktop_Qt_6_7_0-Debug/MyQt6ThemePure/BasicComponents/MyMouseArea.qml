import QtQuick

MouseArea {
    id: myMouseArea

    property bool changeCursor: true
    property bool enableRightMouseButton: false
    property bool changeColorOnHoverToDarker: true
    readonly property bool isParentRect: ((typeof(myMouseArea.parent)===typeof(MyRectangle)) || typeof(myMouseArea.parent)===typeof(Rectangle))

    signal leftClicked()
    signal rightClicked()

    anchors.fill: parent
    cursorShape: myMouseArea.changeCursor? Qt.PointingHandCursor:Qt.ArrowCursor
    acceptedButtons: myMouseArea.enableRightMouseButton? (Qt.LeftButton | Qt.RightButton): Qt.LeftButton

    onClicked:(mouse)=>{
        switch(mouse.button)
        {
        case Qt.LeftButton:
            myMouseArea.leftClicked()
            break;
        case Qt.RightButton:
            if(myMouseArea.enableRightMouseButton)
                myMouseArea.rightClicked()
            break
        }
    }

    onEntered: {
        if(myMouseArea.hoverEnabled)
            if(myMouseArea.isParentRect)
            {
                if(myMouseArea.changeColorOnHoverToDarker)
                    myMouseArea.parent.color=Qt.darker(myMouseArea.parent.color,1.2)
                else
                    myMouseArea.parent.color=Qt.lighter(myMouseArea.parent.color,1.2)
            }
    }
    onExited: {
        if(myMouseArea.hoverEnabled)
            if(myMouseArea.isParentRect)
            {
                if(!myMouseArea.changeColorOnHoverToDarker)
                    myMouseArea.parent.color=Qt.darker(myMouseArea.parent.color,1.2)
                else
                    myMouseArea.parent.color=Qt.lighter(myMouseArea.parent.color,1.2)
            }
    }
}
