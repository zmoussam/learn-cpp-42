/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:53:45 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 00:06:01 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "the memory address of the string     : " << &str << std::endl;
    std::cout << "the memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "the memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "the value of the string              : " << str << std::endl;
    std::cout << "the value pointed to by stringPTR    : " << *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF    : " << stringREF << std::endl;
}