cmake_minimum_required(VERSION 3.29)

project(MyQt6ThemePure VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.7 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.7)
set_source_files_properties(MyTheme.qml PROPERTIES QT_QML_SINGLETON_TYPE ON)

qt_add_executable(appMyQt6ThemePure
    main.cpp
)

qt_add_qml_module(appMyQt6ThemePure
    URI MyQt6ThemePure
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES MyTheme.qml
        QML_FILES BasicComponents/MyApplicationWindow.qml
        QML_FILES BasicComponents/MyLabel.qml
        QML_FILES BasicComponents/MyRectangle.qml
        QML_FILES BasicComponents/MyRippleMouseArea.qml
        QML_FILES BasicComponents/MyButton.qml
        QML_FILES BasicComponents/MyCheckBox.qml
        QML_FILES BasicComponents/MyColumn.qml
        QML_FILES BasicComponents/MyRow.qml
        QML_FILES BasicComponents/MyFlow.qml
        QML_FILES BasicComponents/MyComboBox.qml
        QML_FILES BasicComponents/MyDataCheckItem.qml
        QML_FILES BasicComponents/MyFlickable.qml
        QML_FILES BasicComponents/MyFrame.qml
        QML_FILES BasicComponents/MyGroupBox.qml
        QML_FILES BasicComponents/MyImage.qml
        QML_FILES BasicComponents/MyIcon.qml
        QML_FILES BasicComponents/MyBusyIndicator.qml
        QML_FILES BasicComponents/MyPage.qml
        QML_FILES BasicComponents/MyProgresBar.qml
        QML_FILES BasicComponents/MySlider.qml
        QML_FILES BasicComponents/MyRangeSlider.qml
        QML_FILES BasicComponents/MySwitch.qml
        QML_FILES BasicComponents/MyTextField.qml
        QML_FILES BasicComponents/MyTextArea.qml
        QML_FILES ComplexComponents/MyComplexProgresBar.qml
        QML_FILES ComplexComponents/MySelectCards.qml
        QML_FILES BasicComponents/MyTab.qml
        QML_FILES TabComponents/MyNormalTab.qml
        QML_FILES TabComponents/MySpecialTab.qml
        QML_FILES BasicComponents/MyRectangleRipple.qml
        QML_FILES BasicComponents/MyMouseArea.qml
        QML_FILES TabComponents/MyNormalTabControlHorizontal.qml
        QML_FILES
        QML_FILES TabComponents/MyTabControl.qml
        QML_FILES TabComponents/MyTabControlHorNormal.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appMyQt6ThemePure PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appMyQt6ThemePure
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appMyQt6ThemePure
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appMyQt6ThemePure
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
