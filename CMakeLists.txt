cmake_minimum_required(VERSION 3.6)
project(hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(MYFIRST_SOURCE_FILES myfirst.cpp)
add_executable(myfirst ${MYFIRST_SOURCE_FILES})

set(SOURCE_FILES choices.cpp)
add_executable(hello ${SOURCE_FILES})

set(STOCK_SOURCE_FILES Stock.cpp Stock.h usestock0.cpp stock00.h)
add_executable(stock ${STOCK_SOURCE_FILES})

set(STOCK2_SOURCE_FILES Stock.cpp Stock.h usestock2.cpp stock02.h stock02.h)
add_executable(stock2 ${STOCK2_SOURCE_FILES})