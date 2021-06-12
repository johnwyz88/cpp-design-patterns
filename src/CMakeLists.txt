cmake_minimum_required(VERSION 3.19)
project(patterns)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.76.0 COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(patterns prototype.cpp builder-pattern.cpp codebuilder.cpp factory.h specification-pattern.cpp flyweight.cpp flyweightExercise.cpp)
target_link_libraries(patterns ${Boost_LIBRARIES})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O3 -L/usr/local/Cellar/boost/1.76.0/lib -lboost_system -lboost_serialization")