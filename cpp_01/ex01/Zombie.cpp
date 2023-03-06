/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 14:37:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
    if (!this->name.empty())
        std::cout << this->name << ": is destroyed " << std::endl;
     else 
        std::cout << "zombie destroyed !" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;   
}
Zombie* zombieHorde(int N, std::string name)
{
    if (N > 0)
    {
        Zombie *z = new Zombie[N];
        if (!name.empty())
        {
            int i = 0;
            while(i < N)
            {
                z[i].setName(name);
                i++;
            }
        }
        return z;
    }
    return NULL;
}