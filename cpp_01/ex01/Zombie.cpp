/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/19 00:10:14 by zmoussam         ###   ########.fr       */
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
    if (name)
    this->name = name;   
}
Zombie* zombieHorde(int N, std::string name)
{
    if (N > 0)
    {
        Zombie *z = new Zombie[N];
        int i = 0;
        while(i < N)
        {
            z[i].setName(name);
            i++;
        }
        return z;
    }
    return NULL;
}