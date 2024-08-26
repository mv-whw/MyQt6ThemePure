import QtQuick
import QtQuick.Controls.Basic
import "../"

ComboBox {
    id: myComboBox
    model: ["First", "Second", "Third"]

    delegate: ItemDelegate {
        width: myComboBox.width
        contentItem: MyLabel {
            text: myComboBox.textRole
                ? (Array.isArray(myComboBox.model) ? modelData[myComboBox.textRole] : model[myComboBox.textRole])
                : modelData
            //elide: Text.ElideRight
            verticalAlignment: Text.AlignVCenter

        }
        highlighted: myComboBox.highlightedIndex === index
        onHighlightedChanged: {
            contentItem.isBold=(index===myComboBox.currentIndex)
            contentItem.color=highlighted? (MyTheme.useDarkTheme? "black":MyTheme.defaultLabelFontColor):MyTheme.defaultLabelFontColor
            contentItem.backgroundColor=(highlighted? "lightgreen":"transparent")
        }
    }

    indicator: Canvas {
        id: canvas
        property bool theme: MyTheme.useDarkTheme
        x: myComboBox.width - width - myComboBox.rightPadding*MyTheme.dpIndex
        y: myComboBox.topPadding*MyTheme.dpIndex + (myComboBox.availableHeight - height) / 2
        width: ((myComboBox.background.height/10)*3) *(MyTheme.useDpValues? MyTheme.dpIndex:1)//12
        height: (myComboBox.background.height/5) *(MyTheme.useDpValues? MyTheme.dpIndex:1)//8
        contextType: "2d"

        onThemeChanged: canvas.requestPaint()

        onPaint: {
            context.reset();
            context.moveTo(0, 0);
            context.lineTo(width, 0);
            context.lineTo(width / 2, height);
            context.closePath();
            context.fillStyle = MyTheme.useDarkMode ? "white" : "black";
            context.fill();
        }
    }

    contentItem: MyLabel {
        leftPadding: MyTheme.useDpValues? MyTheme.dpIndex*10:10
        rightPadding: myComboBox.indicator.width + myComboBox.spacing*MyTheme.dpIndex

        text: myComboBox.displayText
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    background: MyRectangle {
        implicitHeight: MyTheme.defaultMinimumButtonHeight
        implicitWidth: implicitHeight*3
        color: MyTheme.useDarkTheme? "grey":"white"
        border.color: MyTheme.defaultFrameBorderColor
        realBorderWidth: 1
        realRadius: 3
    }

    popup: Popup {
        y: myComboBox.height - 1*MyTheme.dpIndex
        width: myComboBox.width
        implicitHeight: contentItem.implicitHeight
        padding: 1*MyTheme.dpIndex

        contentItem: ListView {
            clip: true
            implicitHeight: contentHeight
            model: myComboBox.popup.visible ? myComboBox.delegateModel : null
            currentIndex: myComboBox.highlightedIndex

            ScrollIndicator.vertical: ScrollIndicator { }
        }

        background: MyRectangle {
            border.color: MyTheme.useDarkTheme? "white":"black"
            realBorderWidth: 1
            realRadius: 4
            color: MyTheme.useDarkTheme? "grey":"white"
            clip: true
        }
    }

}
