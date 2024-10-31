module;
#include <string>


export module MyMod;


int32_t calculateLength(const std::string& name)
{
    return name.length();
}
