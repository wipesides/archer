cmake_minimum_required(VERSION 3.26)
project(archer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/wipesides/Qt/6.5.2/gcc_64")
INCLUDE_DIRECTORIES("../../Libraries")
find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Network
        REQUIRED)

add_executable(archer main.cpp
    archerstartingwindow.cpp
        archerstartingwindow.h
        archerdesign.ui
        loginwindow.h loginwindow.cpp loginwindow.ui
        resources.qrc
        archermainwindow.h archermainwindow.cpp archermainwindow.ui
)
target_link_libraries(archer
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Network
)
