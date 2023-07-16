/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:05:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/15 20:01:14 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <string>

template<typename U>
void printElement(int i, U element)
{
    std::cout << "Value of the index " << i << " is : " << element << std::endl;
}

int main()
{
    int arr[] = {154, 548, 3, 545, 5, 345, 7, 234, 9, 10};
    // std::string str[] = {"sdklfj", "sdfdsf", "lksdf"};
    // double *tab = new double[3];
    // tab[0] = 42.54; 
    // tab[1] = 13.37;
    // tab[2] = 3.14;
    // ::iter<std::string>(str, 3, &printElement);
    ::iter<int>(arr, 10, &printElement);
    // ::iter<double>(tab, 10, &printElement);
}