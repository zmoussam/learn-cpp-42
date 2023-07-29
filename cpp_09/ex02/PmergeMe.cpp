/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:34 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/28 23:09:14 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>

bool __isNumber(std::string _arg)
{
    for (size_t i = 0; i < _arg.length(); i++)
    {
        if (!std::isdigit(_arg[i]))
            return false;
    }
    return true;
}

bool __getContainers(std::vector<unsigned int> &_vec, std::list<unsigned int> &_lst, char **av)
{
    unsigned int num;
    int i = 1;
    while (av[i])
    {
        std::istringstream str(av[i]);
        if (__isNumber(std::string(av[i])) &&  str >> num)
        {
            _vec.push_back(num);
            _lst.push_back(num);
        }
        else 
            return (std::cerr << "Error" << std::endl , false);
        i++;
    }
    return true;
}