#include"english.hpp"
#include<iostream>

void English::sayGoodNight() const noexcept
{
    std::cout << _name << " : good night" << std::endl;
}
