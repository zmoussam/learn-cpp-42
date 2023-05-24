/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:08 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:09 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H
#define __FIXED_H

#include <iostream>

class Fixed{
    private:
        int FixedPoint;
        static const int FractionalBits;
    public:
        Fixed(); //Default constructor
        Fixed(const Fixed &copy); // copy DEfault constructor
        ~Fixed(); // Destructor
        Fixed &operator =(const Fixed &src); //Assignment operator constructor
        int getRawBits( void ) const;
        void setRawBits(int const raw);
};

#endif