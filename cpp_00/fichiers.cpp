#include<iostream>
#include<fstream>

int main()
{
    std::ifstream f{"file.txt"};  //std::ios::in
    //std::ofstream f{"data.txt"}
    // f << "hello !"
    if (f.is_open())
    {
        std::string name {""}; 
        //std::string line {""};
        //std::getline(f >> std::ws, line);
        //std::cout << line << std::endl; 
        f >> name;

        std::cout << name << std::endl;

        f >> name;
        std::cout <<  name << std::endl; 
    }
    f.close();  

    return 0;
}