cmake_minimum_required(VERSION 3.0.0)
project(CS014_Lab2 VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

add_executable(integer_list 
    src/main.cpp 
    src/int_list.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)




