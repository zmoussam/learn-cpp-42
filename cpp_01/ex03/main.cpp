/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:38:05 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 16:10:57 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"HumanA.hpp"
#include"HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club;
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        jim.getWeapon();
        club.setType("some other type of club");
        jim.attack(); 
    }
    
    return 0;
}