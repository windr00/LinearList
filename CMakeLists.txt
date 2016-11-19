cmake_minimum_required(VERSION 3.5)
project(cpptest)
include_directories(/usr/local/opt/libxml2/include)
link_directories(/usr/local/opt/libxml2/lib)
include_directories(/usr/local/opt/boost/include)
link_directories(/usr/local/opt/boost/lib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        ArrayListOperator.cpp
        List.h
        ArrayListOperator.h
        ArrayList.cpp
        ArrayList.h)
add_executable(cpptest ${SOURCE_FILES})