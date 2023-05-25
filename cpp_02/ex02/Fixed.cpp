/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:50:24 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/25 21:29:38 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::FractBits = 8;

Fixed::Fixed()
{
    this->RawBits = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;    
}

Fixed::Fixed(const int integer)
{
    this->RawBits = integer << Fixed::FractBits;
}
Fixed::Fixed(const float floatNumber)
{
    this->RawBits = roundf(floatNumber * (1 << Fixed::FractBits));
    return;
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

    this->RawBits = a.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const &f)
{
    o << f.toFloat();
    return o;
}

bool Fixed::operator<( const Fixed &v ) const
{
    return this->RawBits < v.getRawBits();
}

bool Fixed::operator>( const Fixed &v ) const
{
    return this->RawBits > v.getRawBits();
}

bool Fixed::operator>=( const Fixed &v ) const
{
    return this->RawBits >= v.getRawBits();
}

bool Fixed::operator<=( const Fixed &v ) const
{
    return this->RawBits <= v.getRawBits();
}

bool Fixed::operator==( const Fixed &v ) const
{
    return this->RawBits == v.getRawBits();
}

bool Fixed::operator!=( const Fixed &v ) const
{
    return this->RawBits != v.getRawBits();     
}

Fixed Fixed::operator+( const Fixed &v ) const
{
    return Fixed(this->toFloat() + v.toFloat());
}

Fixed Fixed::operator-( const Fixed &v ) const
{
    return Fixed(this->toFloat() - v.toFloat());
}

Fixed Fixed::operator*( const Fixed &v ) const
{
    return Fixed(this->toFloat() * v.toFloat());
}

Fixed Fixed::operator/( const Fixed &v ) const
{
    return Fixed(this->toFloat() / v.toFloat());
}

Fixed &Fixed::operator++()
{
    ++this->RawBits;
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed o = *this;
    this->RawBits++;
    return o;
}

Fixed &Fixed::operator--()
{
    --this->RawBits;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed o = *this;
    this->RawBits--;
    return o;
}

const Fixed &Fixed::min( const Fixed &v1, const Fixed &v2 )
{
    return (v1 < v2)? v1 : v2;
}

Fixed &Fixed::min( Fixed &v1, Fixed &v2 )
{
    return (v1 < v2)? v1 : v2;    
}

const Fixed &Fixed::max( const Fixed &v1, const Fixed &v2 )
{
    return (v1 > v2) ? v1 : v2;
}

Fixed &Fixed::max( Fixed &v1, Fixed &v2 )
{
    return (v1 > v2) ? v1 : v2;
}