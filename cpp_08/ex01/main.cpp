/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:45 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/26 15:03:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <deque>
#include <algorithm>

int main()
{
    try
    {
        Span sp = Span(10);
        std::vector<int> v(5);
        v.push_back(234);
        v.push_back(23423);
        v.push_back(23);
        v.push_back(4345);
        v.push_back(553);
        sp.addNumbers(v.begin(), v.end());
        sp.printVector();
        // for (int i = 0 ; i < 10000; i++)
        //     sp.addNumber(i);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
