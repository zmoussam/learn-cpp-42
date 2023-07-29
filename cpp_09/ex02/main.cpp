/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/28 23:28:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(int ac, char **av)
{
    std::vector<unsigned int> vec;
    std::list<unsigned int> lst; 
    if (ac >= 2)
    {
        if (__getContainers(vec, lst, av))
        {
            std::list<unsigned int>::iterator it = lst.begin(); 
            std::cout << "before: "; 
            for (; it != lst.end(); it++)
            {
                std::cout << *it << " ";
            }    
        }
    }
}