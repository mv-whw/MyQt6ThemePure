import QtQuick
import "BasicComponents"
import "ComplexComponents"
import "TabComponents"
MyApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    MyTabControlHorNormal{

        Component.onCompleted: {
            addTab("test","",false)
            addTab("test2","",false)
        }
    }
}
