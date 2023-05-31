/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:48:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 17:09:38 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("zack");
    ScavTrap *a = new ScavTrap("harry");

    std::cout << c.getName() << std::endl;
    std::cout << a->getEnergyPoint() << std::endl;
    
    c.attack("eco");
    c.attack("eco");
    a->attack("eco");
    c.attack("eco");
    a->takeDamage(10);
    delete a;
    a = &c;
    a->attack("eco");
    c.beRepaired(20);
    c.attack("eco");
    c.attack("eco");
}