/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:40:15 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/02 22:44:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Integer.hpp"

int main()
{
    Integer x(30);
    Integer y(10);
    Integer z(0);

    std::cout << "Value of x : " << x << std::endl;
    std::cout << "Value of x : " << y << std::endl;
    y = Integer(12);
    std::cout << "Value of y : " << y << std::endl;

    std::cout << "Value of z : " << z << std::endl;
    z = x + y;
    std::cout << "Value of z : " << z << std::endl;
    
    return 0;
}