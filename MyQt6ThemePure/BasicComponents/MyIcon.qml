import QtQuick
import QtQuick.Controls.Basic
import QtQuick.Effects
import "../"

Item{
    property alias useSourceSize: myIcon.useSourceSize
    readonly property alias useCostumHeight: myIcon.useCostumHeight
    property alias blurEnabled: myIconEffects.blurEnabled
    property alias blur: myIconEffects.blur
    property alias colorization: myIconEffects.colorization
    property alias colorizationColor: myIconEffects.colorizationColor
    property alias source: myIcon.source
    width: myIcon.width
    MyImage {
        id: myIcon
        visible: false
        height: parent.height
    }
    MultiEffect{
        id: myIconEffects
        anchors.fill: parent
        source: myIcon
    }
}
