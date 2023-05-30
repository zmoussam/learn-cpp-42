/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:48:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/30 16:32:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("zack");

    std::cout << c.getName() << std::endl;
    
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.attack("eco");
    c.beRepaired(20);
    c.attack("eco");
    c.attack("eco");
}