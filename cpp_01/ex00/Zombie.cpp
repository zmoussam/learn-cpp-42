/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/18 23:44:16 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}
Zombie::~Zombie()
{
    std::cout << "<" << this->name << ">  is destroyed " << std::endl;
    // delete this;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
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