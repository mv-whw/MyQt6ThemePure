import QtQuick
import "BasicComponents"
import "ComplexComponents"
import "TabComponents"
MyApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MyColumn
    {
        realSpacing: 10
        width: 400

        MyButton{text: "dodaj tab";onClicked: tabC.addTab("test1","",false)}
        MyTabControlHorNormal{
            id: tabC
            realHeight: 80
            realWidth: 400
            Component.onCompleted: {


            }
        }
    }

    // Rectangle{
    //     color:"dodgerblue"
    //     width: myT.width+10
    //     height: myT.height+10
    // MyIcon
    // {
    //     id: myT
    //     anchors.centerIn: parent
    //     useSourceSize: false
    //     source: "qrc:/test.svg"
    //     height: 100
    //     colorization: 1.0
    //     colorizationColor: "black"
    // }
    // }
    // MyColumn
    // {
    //     realSpacing: 10
    //     MyTabControlHorNormal{

    //         Component.onCompleted: {
    //             addTab("test","",false)
    //             addTab("to je dolgi tekst za test","",false)
    //             addTab("test2","qrc:/test.svg",false)
    //             addTab("to je dolgi tekst za test2","qrc:/test.svg",false)
    //         }
    //     }

    //     MyTabControlHorNormal{
    //         //allowClosing: false
    //         Component.onCompleted: {
    //             addTab("test2","qrc:/test.svg",false)
    //             addTab("to je dolgi tekst za test2","qrc:/test.svg",false)
    //             addTab("test","",false)
    //             addTab("to je dolgi tekst za test","",false)
    //         }
    //     }
    // }
}
