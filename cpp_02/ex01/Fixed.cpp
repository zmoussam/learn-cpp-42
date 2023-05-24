/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:23 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalBits = 8;

Fixed::Fixed(){
    FixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
} 

Fixed::Fixed(const Fixed &copy){
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator =(const Fixed &src){
    
    std::cout << "Copy assignment operator called" << std::endl; 
    this->FixedPoint = src.getRawBits();

    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->FixedPoint;
}

void Fixed::setRawBits(int const raw){
    this->FixedPoint = raw;
}