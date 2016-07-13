cmake_minimum_required(VERSION 3.5)
project(cpp_codes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Hackkarrank/C++/Introduction/01_Hello_World.cpp Hackkarrank/C++/Introduction/02_Input_and_Output.cpp Hackkarrank/C++/Introduction/03_Basic_Data_Types.cpp)
add_executable(cpp_codes ${SOURCE_FILES})