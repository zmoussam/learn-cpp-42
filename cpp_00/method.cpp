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

std::string Window::getTitle()
{
    return this->title;
}
void Window::setTitle(std::string title)
{
    if (title.length() > 15)
    {
        throw new std::invalid_argument("le nom de l'object et trop long!!");
    }
    this->title = title;
}