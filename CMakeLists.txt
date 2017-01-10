cmake_minimum_required(VERSION 3.5)
project(cpptest)
include_directories(/usr/local/opt/libxml2/include)
link_directories(/usr/local/opt/libxml2/lib)
include_directories(/usr/local/opt/boost/include)
link_directories(/usr/local/opt/boost/lib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Interface/List.hpp
        Implementation/ArrayList.hpp
        Operator/ListOperator.hpp
        main.cpp Implementation/SingleLinkTable.hpp Implementation/Stack.hpp Implementation/Queue.hpp Algorithm/Search/Search.hpp Implementation/OrderedList.hpp Algorithm/EquationSolve/EquationSolve.hpp Algorithm/Peterson's_Algorithm/PetersonAlgorithm.hpp)
add_executable(cpptest ${SOURCE_FILES})
target_link_libraries(cpptest pthread)