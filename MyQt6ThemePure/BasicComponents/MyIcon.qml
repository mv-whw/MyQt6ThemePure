import QtQuick
import QtQuick.Controls.Basic
import QtQuick.Effects
import "../"
MyImage {
    id: myIcon
    property alias blurEnabled: myIconEffects.blurEnabled
    property alias blur: myIconEffects.blur
    property alias colorization: myIconEffects.colorization
    property alias colorizationColor: myIconEffects.colorizationColor

    MultiEffect{
        id: myIconEffects
        anchors.fill: parent
        source: myIcon
    }
}
