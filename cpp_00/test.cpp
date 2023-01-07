#include<iostream>
#include<string>

int main()
{
    //variables

   //using namespace std::literals;

    std::string welcome_msg{"hey !"};
    const int x = 12; 
    auto some{123};

    std::cout << welcome_msg << std::endl;

    // saisie utilisateur:

    int number;

    std::cout << "add your age";

    std::cin >> number;

    std::cin.ignore(255, '\n');
    
    std::cout << " Good : " << std::cin.good() << std::endl;
    std::cout << " fail : " << std::cin.fail() << std::endl;
    std::cout << " bad : " << std::cin.bad() << std::endl;

    std::cout << "your age is : " << number << std::endl;

    std::cout << "write your name : ";
    std::string username;

    std::getline(std::cin, username);// pour lire tout la line avec les espaces

    std::cout << "your name is : " << username << std::endl;

    return 0; 
}