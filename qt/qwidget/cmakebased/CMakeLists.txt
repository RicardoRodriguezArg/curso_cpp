cmake_minimum_required(VERSION 2.8.11)

project(curso_qt_qwidget)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)
find_package(Qt5Core)

# Tell CMake to create the helloworld executable
#if (MSVC)
#    add_executable(${PROJECT_NAME} WIN32 main.cpp)
#endif (MSVC)
#if (UNIX)
	    add_executable(${PROJECT_NAME} main.cpp)
#endif(UNIX)


# Use the Widgets module from Qt 5.
target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core)

set(CMAKE_CXX_STANDARD 11)
