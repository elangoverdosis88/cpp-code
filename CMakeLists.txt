cmake_minimum_required(VERSION 3.5)
project(cpp_codes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Hackkarrank/C++/Introduction/01_Hello_World.cpp Hackkarrank/C++/Introduction/02_Input_and_Output.cpp Hackkarrank/C++/Introduction/03_Basic_Data_Types.cpp "Code_Jam/2016/Qualify Round/Problem_D.cpp" "Code_Jam/2016/Qualify Round/Problem_B.cpp" "Code_Jam/2016/Qualify Round/Problem_B1.cpp" "Code_Jam/2016/Round A/Problem_A.cpp" "Code_Jam/2016/Round A/Problem_C.cpp" "Code_Jam/2016/Round A/Number_Getting_Problem.cpp" Hackkarrank/C++/Introduction/04_Conditional_Statements.cpp Hackkarrank/C++/Introduction/05_For_loop.cpp)
add_executable(cpp_codes ${SOURCE_FILES})