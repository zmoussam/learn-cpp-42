/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:04:36 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/15 20:04:23 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
int main()
{
    // int *a = new int();
    // std::cout << *a << std::endl;

    try
    {
        Array<double> d;
        Array<int> a(2);
        Array<int> b(a);

        std::cout << "size of array d is : " << d.size() << std::endl;
        std::cout << "size of array a is : " << a.size() << std::endl;
        a[0] = 3;
        std::cout << "value of index 0 is : " << a[0] << std::endl; // check the deep copy
        std::cout << "size of array is b : " << b.size() << std::endl;
        std::cout << "value of index 0 is : " << b[0] << std::endl; // check the deep copy
    }
    catch(std::exception &e)
    {
        std::cout << "index out of range" << std::endl;
    }
}
