cmake_minimum_required(VERSION 3.16)
project(stackMachine)

set(CMAKE_CXX_STANDARD 14)

add_executable(stackMachine main.cpp Data.cpp Data.h Instruction.cpp Instruction.h PushData.cpp PushData.h AddData.cpp AddData.h SubData.cpp SubData.h MulData.cpp MulData.h DivData.cpp DivData.h PrintData.cpp PrintData.h EndProgram.cpp EndProgram.h Program.cpp Program.h StackMachine.cpp StackMachine.h)
