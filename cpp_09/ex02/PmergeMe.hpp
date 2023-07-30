/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:32 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/30 20:28:28 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME__
#define PMERGEME__
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>

bool __isNumber(std::string _arg);

template<typename _containers >
bool __getContainers(_containers &_container, char **av)
{
    unsigned int num;
    int i = 1;
    while (av[i])
    {
        std::istringstream str(av[i]);
        if (__isNumber(std::string(av[i])) &&  str >> num)
        {
            _container.push_back(num);
        }
        else 
            return (std::cerr << "Error" << std::endl , false);
        i++;
    }
    return true;
}

std::vector<unsigned int> __sort_vector(char **av, double &process_time);
// double __sort_list();

#endif