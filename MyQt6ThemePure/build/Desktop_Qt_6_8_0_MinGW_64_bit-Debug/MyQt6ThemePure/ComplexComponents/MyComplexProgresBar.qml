import QtQuick
import "../BasicComponents"
import "../"

MyColumn
{
    property alias infoText: infoProgressStat.text
    property alias progWidth: myProgress.width
    property alias progHeight: myProgress.height
    property alias progValue: myProgress.value
    MyRow
    {
        MyProgresBar{
            id: myProgress
            anchors.verticalCenter: parent.verticalCenter
        }
        MyLabel{
            id: progNum;
            text: (myProgress.value*100)+"%";
            anchors.verticalCenter: parent.verticalCenter
        }
    }
    MyLabel{
        id: infoProgressStat;
        width: myProgress.width+progNum.width+2*parent.spacing;
        visible: text!==""
        wrapModeEnabled: true
        elideModeEnabled: false
    }
}
