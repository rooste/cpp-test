cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CppTest VERSION 2024.1)

include(CTest)
enable_testing()

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(CppTest src/MyCpp.cpp)
set_property(TARGET CppTest PROPERTY CXX_STANDARD 20)