cmake_minimum_required(VERSION 3.30)

project(CppTest VERSION 2024.1)

include(CTest)
enable_testing()

# Turning off extensions avoids an issue with the clang 16 compiler
# clang 17 and greater can avoid this setting
set(CMAKE_CXX_EXTENSIONS OFF)
# Set the version of C++ for the project
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
    cli11
    GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
    GIT_TAG v2.3.2
)

FetchContent_MakeAvailable(cli11)

add_executable(CppTest)
target_sources(CppTest PUBLIC src/MyCpp.cpp)

# CMake failes if comments removed
#add_library(foo)
# Add the module file to the library
#target_sources(foo
#  PUBLIC
#    FILE_SET CXX_MODULES FILES
#      src/MyMod.cppm
#)


target_link_libraries(CppTest PRIVATE CLI11::CLI11)
