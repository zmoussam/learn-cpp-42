#include "someone.hpp"
#include <iostream>

Someone::Someone(const std::string& name) noexcept : _name(name) {}

void Someone::sayGoodNight() const noexcept
{
    std::cout << _name << " : ..." << std::endl;
}