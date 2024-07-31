pragma Singleton
import QtQuick

Item {
    //common app settings
    property bool useDarkTheme: false
    property bool useSpValues: false
    property bool useDpValues: false
    property bool isInLandscapeMode: false
    readonly property real dpIndex: Math.ceil((32.0*Screen.pixelDensity)/160.0)
    readonly property real spIndex: Math.ceil(((32.0*Screen.pixelDensity)/160.0)*1.4375)//dpIndex*1.4375
    property real fontsScale: 1.0
    property real itemsScale: 1.0
    property color defaultWindowPageBackgroundColor: useDarkTheme? "black":"white"
    property int appWindowWidth:0
    property int appWindowHeight:0


    //OS determination
    property string platformOS: ""
    readonly property bool isWindows: platformOS==="windows"
    readonly property bool isLinux: platformOS==="linux"
    readonly property bool isMacOs: platformOS==="osx"
    readonly property bool isWasm: platformOS==="wasm"
    readonly property bool isAndroid: platformOS==="android"
    readonly property bool isIos: platformOS==="ios"
    readonly property bool isDesktop: (isWindows || isLinux || isMacOs || isWasm)
    readonly property bool isMobile: (isAndroid || isIos)
    readonly property bool isOtherOs: (!isDesktop && !isMobile)


    //label settings
    property int defaultLabelFontSize: 16
    property color defaultLabelFontColor: useDarkTheme? "white":"black"

    //button settings
    property int minimumButtonWidth: 100
    readonly property int defaultMinimumButtonWidth: useDpValues? Math.ceil(MyTheme.dpIndex*minimumButtonWidth):minimumButtonWidth
    property int minimumButtonHeight: 40
    readonly property int defaultMinimumButtonHeight: useDpValues? Math.ceil(MyTheme.dpIndex*minimumButtonHeight):minimumButtonHeight
    property color defaultButtonColor: "dodgerblue"
    property color defaultButtonFontColor: "white"
    property int defaultButtonFontSize: 16
    property int defaultButtonRadius: 10

    //checkbox settings
    //TO-DO barve

    //column & row & flow settings
    property int defaultItemsSpacing: 10
    property int defaultItemsPading: 10

    //busyindicator settings
    property int busyIndicatorHeight:20
    property color colorOfBusyIndicatorItems: "lightblue"

    //progress bar settings
    property color defaultProgresBarBackgroundColor: "gray"
    property color defaultProgresBarFinishedColor: "green"

    //sliders
    property color defaultSliderProgresColor: "dodgerblue"
    property color defaultSliderBackgroundColor: "lightgray"

    //selectCards settings

    //tabs settings
    property int normalTabControlHorHeight: 40
    property int normalTabButtonHorWidth: 150

}
