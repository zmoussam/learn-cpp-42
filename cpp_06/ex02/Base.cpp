/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:41:38 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 14:25:00 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>

Base::~Base()
{
}

Base *Base::generate(void)
{
    std::srand(std::time(0)); // Seed the random number generator

    int r = std::rand() % 3;
    if (r == 0)
    {
        std::cout << "Generate new A" << std::endl;
        return (new A);
    }
    else if (r == 1)
    {
        std::cout << "Generate new B" << std::endl;
        return (new B);
    }
    else if (r == 2)
    {
        std::cout << "Generate new C " << std::endl;
        return (new C);
    }
    return NULL;
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "the actual type pointed by p is \"A\" " << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "the actual type pointed by p is \"B\" " << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "the actual type pointed by p is \"C\" " << std::endl;
}

void Base::identify(Base &p)
{
    if (dynamic_cast<A *>(&p))
        std::cout << "the actual type pointed by p is \"A\" " << std::endl;
    else if (dynamic_cast<B *>(&p))
        std::cout << "the actual type pointed by p is \"B\" " << std::endl;
    else if (dynamic_cast<C *>(&p))
        std::cout << "the actual type pointed by p is \"C\" " << std::endl;

}