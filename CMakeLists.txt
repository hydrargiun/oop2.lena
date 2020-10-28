cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(Evol Evol.cpp Evol.h)
link_libraries(Evol)
add_library(dialog dialog.cpp dialog.h )
link_libraries(dialog)
add_library(num getnum.h getnum.h)
link_libraries(dialog)
add_executable(oop2 main.cpp)
