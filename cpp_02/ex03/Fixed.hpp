/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:21:24 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/26 14:12:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__
#define FIXED__

#include <iostream>

    class Fixed
    {
        private:
            int RawBits;
            static const int FractBits;
        
        public:
            Fixed();
            Fixed( const Fixed &copy );
            Fixed( const int integer );
            Fixed( const float f );
            ~Fixed();
            Fixed &operator=( const Fixed &a );
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
            bool operator<( const Fixed &v ) const;
            bool operator>( const Fixed &v ) const;
            bool operator>=( const Fixed &v ) const;
            bool operator<=( const Fixed &v ) const;
            bool operator==( const Fixed &v ) const;
            bool operator!=( const Fixed &v ) const;
            Fixed operator+( const Fixed &v ) const;
            Fixed operator-( const Fixed &v ) const;
            Fixed operator*( const Fixed &v ) const;
            Fixed operator/( const Fixed &v ) const;
            Fixed &operator++();
            Fixed operator++( int );
            Fixed &operator--();
            Fixed operator--( int );
            static const Fixed &min( const Fixed &v1, const Fixed &v2 );
            static Fixed &min( Fixed &v1, Fixed &v2 );
            static const Fixed &max( const Fixed &v1, const Fixed &v2 );
            static Fixed &max( Fixed &v1, Fixed &v2 );
            
    };

std::ostream & operator<<( std::ostream & o, Fixed const &f );
#endif