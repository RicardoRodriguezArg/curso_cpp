cmake_minimum_required(VERSION 2.8.11)

project(curso_qt_qwidget)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

# Tell CMake to create the helloworld executable
add_executable(${PROJECT_NAME} WIN32 main.cpp)

# Use the Widgets module from Qt 5.
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

set(CMAKE_CXX_STANDARD 11)