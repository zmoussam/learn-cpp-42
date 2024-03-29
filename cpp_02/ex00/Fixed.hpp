/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:28:08 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/25 16:10:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__
#define FIXED__

    class Fixed
    {
        private:
            int RawBits;
            static const int FractBits;
        
        public:
            Fixed();
            Fixed(Fixed const &copy);
            ~Fixed();
            Fixed &operator=(const Fixed &a);
            int getRawBits(void) const;
            void setRawBits(int const raw);
    };
    
#endif