cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CppTest VERSION 2024.1)

include(CTest)
enable_testing()

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# FetchContent module
include(FetchContent)

# Fetch CLI11 from GitHub
FetchContent_Declare(
  CLI11
  GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
  GIT_TAG v2.1.2 # You can specify the version you want to use
)
FetchContent_MakeAvailable(CLI11)


# Add the executable
add_executable(CppTest src/MyCpp.cpp src/MyMod.cppm)
target_link_libraries(CppTest PRIVATE CLI11::CLI11)
set_property(TARGET CppTest PROPERTY CXX_STANDARD 20)
target_compile_options(CppTest PRIVATE -fmodules -fcxx-modules)


# Add the test executable
add_executable(TestMyCpp test/MyTest.cpp)

# Register the test with CTest
add_test(NAME MyCppTest COMMAND TestMyCpp)