#include "indonesian.hpp"
#include<iostream>

void Indonesian::sayGoodNight() const noexcept
{
   // Someone::sayGoodNight();
    std::cout << _name << " : selamat malam" << std::endl;
}