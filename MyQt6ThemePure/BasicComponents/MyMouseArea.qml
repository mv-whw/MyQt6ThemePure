import QtQuick

MouseArea {
    id: myMouseArea

    property bool changeCursor: true
    property bool enableRightMouseButton: false

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
}
