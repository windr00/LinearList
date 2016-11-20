cmake_minimum_required(VERSION 3.5)
project(cpptest)
include_directories(/usr/local/opt/libxml2/include)
link_directories(/usr/local/opt/libxml2/lib)
include_directories(/usr/local/opt/boost/include)
link_directories(/usr/local/opt/boost/lib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Interface/List.hpp
        Implementation/ArrayList.hpp
        Operator/ArrayListOperator.hpp
        main.cpp Implementation/SingleLinkTable.hpp Implementation/Stack.hpp Implementation/Queue.hpp)
add_executable(cpptest ${SOURCE_FILES})