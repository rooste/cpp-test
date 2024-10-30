export module MyMod;

#include <string>

export int getStringLength(const std::string& str) {
    return str.length();
}