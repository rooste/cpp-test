//import MyMod;

#include <iostream>
#include <CLI/CLI.hpp>

int main(int argc, char** argv) 
{
    CLI::App app{"MyCppProject"};

    std::string name = "World";
    app.add_option("-n,--name", name, "Name to greet");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Hello, " << name << " with " << __cplusplus << std::endl;

    return 0;
}

/*
  Clang 16 error when trying to use modules.


CMake Error in CMakeLists.txt:
  The target named "CppTest" has C++ sources that may use modules, but the compiler does not provide a way to discover the import graph dependencies.
  See the cmake-cxxmodules(7) manual for details.  Use the CMAKE_CXX_SCAN_FOR_MODULES variable to enable or disable scanning.
*/