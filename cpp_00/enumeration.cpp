#include<iostream>

enum class NaturalElement //
{
    earth,
    air,
    fire,
    water
};

int main()
{
    NaturalElement ne = NaturalElement::water;

    std::cout << static_cast<int>(ne) << std::endl;

    return 0;
}