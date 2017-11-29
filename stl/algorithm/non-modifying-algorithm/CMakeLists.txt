project (non-mutating-algorithm)

set (CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME} main.cpp)
add_executable(any_example example_two.cpp)
add_executable(find_example example_three.cpp)