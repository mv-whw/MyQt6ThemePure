import QtQuick
import QtQuick.Controls.Basic
import "../"
Flickable {
    id: myFlickable
    boundsBehavior: MyTheme.isDesktop? MyFlickable.StopAtBounds:MyFlickable.DragAndOvershootBounds
    width: parent.width
    height: parent.height
    clip: true
    property bool flickVertical: true
    flickableDirection: myFlickable.flickVertical ? Flickable.VerticalFlick:Flickable.HorizontalFlick
}
