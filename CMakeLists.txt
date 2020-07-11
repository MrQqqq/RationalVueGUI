cmake_minimum_required(VERSION 3.10)
#项目名
PROJECT(RationalVueGUI)

# C++14
set(CMAKE_CXX_STANDARD 11)
# 禁止MSVC的wd4996警告
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4996")

# QT
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed 
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON) 
#set(QRC_SOURCE_FILES image.qrc)

#qt5_add_resources(QRC_FILES ${QRC_SOURCE_FILES})

find_package(Qt5 5.9 COMPONENTS Core Gui Widgets Sql Multimedia MultimediaWidgets UiTools Designer CONFIG  REQUIRED)


#MenuBarZone文件
file(GLOB MenuBarZone_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/MenuBarZone/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/MenuBarZone/)

#DataZoneLeft文件
file(GLOB DataZoneLeft_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/DataZoneLeft/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/DataZoneLeft/)

#DataZoneRight文件
file(GLOB DataZoneRight_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/DataZoneRight/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/DataZoneRight/)

#DimensionReportZone文件
file(GLOB DimensionReportZone_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/DimensionReportZone/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/DimensionReportZone/)

#GraphiceZone文件
file(GLOB GraphiceZone_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/GraphiceZone/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/GraphiceZone/)

#OperationZoneLeft文件
file(GLOB OperationZoneLeft_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/OperationZoneLeft/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/OperationZoneLeft/)
#OperationZoneRight文件
file(GLOB OperationZoneRight_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/OperationZoneRight/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/OperationZoneRight/)


#PaintZone文件
file(GLOB PaintZone_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/PaintZone/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/PaintZone/)
#MachineStatusZone文件
file(GLOB MachineStatusZone_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/MachineStatusZone/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/MachineStatusZone/)
#StatusBarZone文件
file(GLOB StatusBarZone_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/StatusBarZone/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/StatusBarZone/)

#MainWindow文件
file(GLOB MainWindow_FILES ${CMAKE_CURRENT_SOURCE_DIR}/GUI/MainWindow/*.*)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/GUI/MainWindow/)

file(GLOB ALL_GUI_FILES ${MenuBarZone_FILES} ${DataZoneLeft_FILES} ${DataZoneRight_FILES} ${DimensionReportZone_FILES}
		${GraphiceZone_FILES} ${OperationZoneLeft_FILES} ${OperationZoneRight_FILES} ${PaintZone_FILES} ${MachineStatusZone_FILES} 
		${StatusBarZone_FILES} ${MainWindow_FILES}
	)
source_group("GUI" FILES ${ALL_GUI_FILES})
add_executable(${PROJECT_NAME} main.cpp ${ALL_GUI_FILES})

target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Sql Qt5::Multimedia Qt5::MultimediaWidgets Qt5::UiTools Qt5::Designer)
