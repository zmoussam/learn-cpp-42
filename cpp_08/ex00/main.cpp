/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:38 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/25 22:56:28 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <deque>

int main()
{
    try
    {
        std::deque<int> v1(5);
        v1[0] = 2;
        v1[1] = 6;
        v1[2] = 9;
        v1[3] = 0;
        v1[4] = 1;
        std::cout << *easyfind(v1, 0) << std::endl;
        *easyfind(v1, 0) = 10;
        std::cout << *easyfind(v1, 10) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}