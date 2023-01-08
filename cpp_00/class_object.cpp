#include "point.hpp"
#include<iostream>

Point::Point()
{
    std::cout << "Creation d'un point" << this << std::endl;
}

Point::~Point()
{
    std::cout << "destracter  " << this << std::endl;
}

Point::Point(const Point& p)
{
    std::cout << "Copie d'un point" << std::endl;
}

int main()
{
    Point p;

    std::cout << "hi" << std::endl; 
    //Point p2 = p;
    return 0;
}