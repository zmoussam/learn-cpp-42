/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:01 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 17:58:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::FractBits = 0;

Fixed::Fixed()
{
    this->RawBits = 0;
}

Fixed::Fixed(Fixed &copy)
{
    this->RawBits = copy.RawBits;    
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
    return this->RawBits;    
}

Fixed &Fixed::operator=(const Fixed &a)
{
    this->RawBits = a.getRawBits();
    return *this;
}