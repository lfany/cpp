cmake_minimum_required(VERSION 3.6)
project(hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES choices.cpp)
add_executable(hello ${SOURCE_FILES})

set(STOCK_SOURCE_FILES Stock.cpp Stock.h usestock0.cpp stock00.h)
add_executable(stock ${STOCK_SOURCE_FILES})