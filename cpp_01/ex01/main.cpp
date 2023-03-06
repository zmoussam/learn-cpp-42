/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:42 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 14:43:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;
    int nbrZombie = 5;
    int i = 0; 
    z = zombieHorde(nbrZombie, "zack");
    while(i < nbrZombie && nbrZombie > 0)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
}