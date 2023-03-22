cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 17)

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin )

project(LAB1)

add_executable(LAB1
    Txt.h
    Txt.cpp
    l1.cpp
)