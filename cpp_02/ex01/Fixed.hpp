/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/25 17:16:09 by zmoussam         ###   ########.fr       */
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
            Fixed(Fixed const &copy);
            Fixed(const int i);
            Fixed(const float f);
            ~Fixed();
            Fixed &operator=(const Fixed &a);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            float toFloat(void) const;
            int toInt(void) const;
    };

std::ostream & operator<<(std::ostream & o, Fixed const &f);
#endif