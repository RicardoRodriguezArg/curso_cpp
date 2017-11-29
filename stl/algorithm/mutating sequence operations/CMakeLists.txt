project (mutating-algorithm)
set (CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME} main.cpp)
add_executable(remove_algorithm remove_algorithm.cpp)
add_executable(partition partition.cpp)
