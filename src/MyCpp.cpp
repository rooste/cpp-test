#include <iostream>
#include <CLI/CLI.hpp>

int main(int argc, char** argv) 
{
    CLI::App app{"MyCppProject"};

    std::string name = "World";
    app.add_option("-n,--name", name, "Name to greet");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}