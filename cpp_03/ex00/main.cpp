/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:48:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 16:36:37 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("zack");
    ClapTrap *a = new ClapTrap("name");
    std::cout << c.getName() << std::endl;
    std::cout << a->getName() << std::endl;
    c.takeDamage(10);
    c.attack("eco");
    c.beRepaired(20);
    a->attack("eco");
    a->attack("eco");
    delete a ;
}