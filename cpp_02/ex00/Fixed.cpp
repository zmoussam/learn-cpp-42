#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed(){
    FixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
} 

Fixed::Fixed(const Fixed &copy){
    *this = copy;
    std::cout << "Copy assignment operator called" << std::endl; 
}

Fixed &Fixed::operator=(const Fixed &src){
    if
}