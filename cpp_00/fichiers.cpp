#include<iostream>
#include<fstream>

int main()
{
    std::ifstream f{"file.txt"};  //std::ios::in
    std::string name {""};
    f >> name;

    std::cout << name << std::endl;

    f >> name;
    std::cout << name << std::endl;

    return 0;
}