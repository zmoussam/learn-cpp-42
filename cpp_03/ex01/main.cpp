/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:48:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/29 17:33:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("zack");

    std::cout << c.getName() << std::endl;
    c.takeDamage(10);
    
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.beRepaired(20);
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
}