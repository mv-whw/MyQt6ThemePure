import QtQuick
import QtQuick.Controls.Basic
import "../"

Image {
    id: myImage
    property bool useSourceSize: true
    readonly property bool useCostumHeight: !useSourceSize

    onUseSourceSizeChanged: myImage.calculateSize()

    onHeightChanged: {
        myImage.calculateSize()
    }


    onStatusChanged: {
        if(status===Image.Ready)
        {
            myImage.calculateSize()
        }
    }

    function calculateSize()
    {
        let sW=myIcon.sourceSize.width
        let sH=myIcon.sourceSize.height
        let ratio=0
        if(myImage.useSourceSize)
        {
            if(myImage.width!==sW)
                myImage.width=sW
            if(myImage.height!==sH)
                myImage.height=sH
        }else
        {
            ratio=myImage.height/sH
            let wid=Math.ceil(sW*ratio)
            if(myImage.width!==wid)
                myImage.width=wid
        }
    }
}
