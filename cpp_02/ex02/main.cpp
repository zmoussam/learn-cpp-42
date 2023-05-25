/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:50:48 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/25 17:50:49 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    
    Fixed a;
    Fixed const b( -10 ); 
    Fixed const c( 42.42f );
    Fixed const d( b );
    
    a = Fixed( 1234.4321f );
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << a.toInt() << " as integer" << std::endl;
    std::cout << b.toInt() << " as integer" << std::endl;
    std::cout << c.toInt() << " as integer" << std::endl;
    std::cout << d.toInt() << " as integer" << std::endl;
    
}