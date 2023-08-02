/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:03:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/31 18:15:35 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <iomanip>
// #include <ctime>

void printBeforeSort(char **av)
{
    size_t i = 0;
    std::cout << "Before :  ";
    while (av[++i])
        std::cout << av[i] << " " ;
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    std::vector<unsigned int> vec;
    std::list<unsigned int> lst;
    clock_t start_time;
    clock_t end_time;
    double vector_process;
    double list_process;
    if (ac >= 2)
    {
        start_time = clock();
        lst = __fordJohnson_sort_list(av);
        end_time = clock();
        list_process = (double)(end_time - start_time) / (CLOCKS_PER_SEC / 1000000.0);
        if (!lst.empty())
        {
            start_time = clock();
            vec = __fordJohnson_sort_vector(av);
            end_time = clock();
            vector_process = (double)(end_time - start_time) / (CLOCKS_PER_SEC / 1000000.0);
            printBeforeSort(av);
            printSortedList(lst);
            std::cout << "Time to process a range of  " << vec.size() << " elements with std::vector<> : " << std::fixed << vector_process << " us "<< std::endl;
            std::cout << "Time to process a range of  " << lst.size() << " elements with std::list<> : " << std::fixed << list_process << " us " << std::endl;
        }
        // printSortedVec(vec);
    }
}