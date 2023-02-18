/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:42 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/19 00:09:19 by zmoussam         ###   ########.fr       */
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