#include"methode.hpp"
#include<iostream>
#include<string>

Window::Window(std::string t) : title(t)
{

}
void Window::run() const noexcept
{
    std::cout << "Affichage..." << std::endl;
}