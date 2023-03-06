/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 14:37:30 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout  << this->name << ": is destroyed " << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
        this->name = name;   
}
Zombie* newZombie(std::string name)
{
    Zombie *z = new Zombie;
    z->setName(name);
    return (z);
}

void randomChump(std::string name)
{
    Zombie z;
    z.setName(name);
    z.announce();
}