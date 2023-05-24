/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:26 by zmoussam         ###   ########.fr       */
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
        Fixed(const Fixed &copy); // copy Default constructor
        Fixed(const int);
        ~Fixed(); // Destructor
        Fixed &operator = (const Fixed &src); //Assignment operator constructor
        int getRawBits( void ) const;
        void setRawBits(int const raw);

};

#endif