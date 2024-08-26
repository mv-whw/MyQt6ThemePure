import QtQuick
import QtQuick.Controls.Basic
import "../"
Slider {
    id: mySlider
    padding: MyTheme.useDpValues? Math.ceil(MyTheme.dpIndex*10):10
    snapMode: MySlider.SnapAlways

    background: MyRectangle {
             x: mySlider.leftPadding
             y: mySlider.topPadding + mySlider.availableHeight / 2 - height / 2
             implicitWidth: 150
             implicitHeight: MyTheme.defaultControlHeight/5
             width: mySlider.availableWidth
             height: implicitHeight
             radius: implicitHeight/2
             color: MyTheme.defaultSliderBackgroundColor

             MyRectangle {
                 width: mySlider.visualPosition * parent.width
                 height: parent.height
                 color: MyTheme.defaultSliderProgresColor
                 radius: Math.ceil( parent.height/2)
             }
         }

         handle: MyRectangle {
             x: mySlider.leftPadding + mySlider.visualPosition * (mySlider.availableWidth - width)
             y: mySlider.topPadding + mySlider.availableHeight / 2 - height / 2
             implicitWidth: 40/10*7
             implicitHeight: implicitWidth
             radius: implicitHeight/2
             color: mySlider.pressed ? "#f0f0f0" : "#f6f6f6"
             border.color: "#bdbebf"
             realBorderWidth: 1
         }
}
