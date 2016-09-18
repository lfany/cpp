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

set(TIME_SOURCE_FILES mytime/Time.cpp mytime/Time.h mytime/mytime.cpp)
add_executable(mytime ${TIME_SOURCE_FILES})

set(TIME3_SOURCE_FILES mytime3/Time.cpp mytime3/Time.h mytime3/mytime3.cpp)
add_executable(mytime3 ${TIME3_SOURCE_FILES})

set(VECTOR_SOURCE_FILES vector/Vector.cpp vector/Vector.h vector/randwalk.cpp)
add_executable(vector ${VECTOR_SOURCE_FILES})

set(STRINGBAD_SOURCE_FILES strings/stringbad.cpp strings/stringbad.h strings/cegnews.cpp)
add_executable(stringbad ${STRINGBAD_SOURCE_FILES})