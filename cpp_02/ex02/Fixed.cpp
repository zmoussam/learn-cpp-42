/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:50:24 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/25 17:50:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::FractBits = 8;

// void printMemoryBits(const void* ptr, size_t size) {
//     unsigned char* bytePtr = (unsigned char*)ptr;
    
//     for (int i = size - 1; i >=  0 ; i--) {
//         unsigned char byte = bytePtr[i];
        
//         for (int j = 7; j >= 0; j--) {
//             printf("%d", (byte >> j) & 1);
//         }
        
//         printf(" ");
//     }
    
//     printf("\n");
// }

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->RawBits = 0;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;    
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->RawBits = integer << Fixed::FractBits;
}
Fixed::Fixed(const float floatNumber)
{
    std::cout << "Float constructor called" << std::endl;
    this->RawBits = roundf(floatNumber * (1 << Fixed::FractBits));
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->RawBits = raw;
}

int Fixed::getRawBits(void) const
{
    return this->RawBits;    
}

float Fixed::toFloat() const
{
    return ((float)this->RawBits / (1 << Fixed::FractBits));
}

int Fixed::toInt() const
{
    return this->RawBits >> Fixed::FractBits;
}

Fixed &Fixed::operator=(const Fixed &a)
{
    std::cout << "Copy assignment operator called " << std::endl;
    this->RawBits = a.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const &f)
{
    o << f.toFloat();
    return o;
}