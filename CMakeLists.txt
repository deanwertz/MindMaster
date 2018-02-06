cmake_minimum_required(VERSION 3.9)
project(cs205)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Guess.cpp Guess.h)
add_executable(cs205 ${SOURCE_FILES})