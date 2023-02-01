/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:24:28 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 21:42:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "class.hpp"

Sample::Sample(void)
{
    std::cout << "Constructor called" << std::endl;
    return;    
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void Sample::bar(char const c) const
{
    std::cout << "Member function bar called with char overload : " << c << std::endl;
    return;
}

void Sample::bar(int const i) const
{
    std::cout << "Member function bar called with int overload : " << i << std::endl;
    return;
}

void Sample::bar(float const f) const
{
    std::cout << "Member function bar called with float overload : " << f << std::endl;
    return;
}

void Sample::bar(Sample const & S) const
{
    std::cout << "Member function bar called with Sample class overload : " << std::endl;
    return;
}

int main()
{
    Sample test;
    Sample test2;
    
    test.bar(13.14f);
    test.bar('c');
    test.bar(1);
    test.bar(test2);
    return 0;
}
