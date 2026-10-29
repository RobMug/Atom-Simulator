#pragma once

#include <string>   // std::string
#include <cstddef>  // std::size_t

struct Element {
    std::string name;
    std::string symbol;
    int atomicNumber;
};

extern Element elements[];
extern std::size_t elementSize;