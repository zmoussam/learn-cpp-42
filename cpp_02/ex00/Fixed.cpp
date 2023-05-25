/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:01 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/25 16:10:52 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::FractBits = 8;

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

Fixed::~Fixed()
{
    
}
void Fixed::setRawBits(int const raw)
{
    this->RawBits = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->RawBits;    
}

Fixed &Fixed::operator=(const Fixed &a)
{
    std::cout << "Copy assignment operator called " << std::endl;
    this->RawBits = a.getRawBits();
    return *this;
}