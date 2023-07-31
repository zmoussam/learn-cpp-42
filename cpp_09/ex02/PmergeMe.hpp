/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:32 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/31 04:03:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME__
#define PMERGEME__
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>
// #include <ctime>

bool __isNumber(std::string _arg);
std::vector<unsigned int> jacobsthalNumbers(unsigned int n);

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


std::vector<unsigned int> __fordJohnson_sort_vector(char **av);
std::vector<unsigned int> __sort_vector(std::vector<unsigned int> jacobsthalnumber, \
std::pair<std::vector<unsigned int>, std::vector<unsigned int> > mainChain_pend,\
 std::vector<unsigned int>);
 std::pair<std::vector<unsigned int>, std::vector<unsigned int> > __get_mainChain_pend_vector(\
std::vector<std::pair<unsigned int, unsigned int> > pairVec);
void __recursivelysort_Vector(std::vector<std::pair<unsigned int, unsigned int> > &pairVec);
void __pairVector_sort(std::vector<std::pair<unsigned int, unsigned int> > leftArray, \
std::vector<std::pair<unsigned int, unsigned int> > rightArray, \
std::vector<std::pair<unsigned int, unsigned int> > &baseArray);
std::vector<std::pair<unsigned int, unsigned int> > __getPairVec(std::vector<unsigned int> _vec);
void printSortedVec(std::vector<unsigned int> _vec);

std::list<std::pair<unsigned int, unsigned int> > __getPairList(std::list<unsigned int> _lst);
std::list<unsigned int> __sort_list(char **av, double &process_time);
void __pairList_sort(std::list<std::pair<unsigned int, unsigned int> > leftList, \
std::list<std::pair<unsigned int, unsigned int> > rightList, \
std::list<std::pair<unsigned int, unsigned int> > &baseList);
void  __recursivelysort_List(std::list<std::pair<unsigned int, unsigned int> > &pairList);
std::pair<std::list<unsigned int>, std::list<unsigned int> > __get_mainChain_pend(\
std::list<std::pair<unsigned int, unsigned int> > pairList);
unsigned int __get_value_at(std::list<unsigned int> lst, unsigned int _pos);
void printSortedList(std::list<unsigned int> _list);
std::list<unsigned int> __sort_list(std::vector<unsigned int> jacobsthalnumber, \
std::pair<std::list<unsigned int>, std::list<unsigned int> > mainChain_pend,\
std::list<unsigned int>);
std::list<unsigned int> __fordJohnson_sort_list(char **av);

#endif