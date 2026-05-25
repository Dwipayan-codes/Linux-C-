cmake_minimum_required(VERSION 3.10)

project(CalculatorProject)

include_directories(include)

add_executable(app
               src/main.cpp
               src/math.cpp)
