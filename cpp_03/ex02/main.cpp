/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:48:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 16:35:36 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
   FragTrap *c = new FragTrap("zack");
   ScavTrap *s = new ScavTrap("zack");
   
   c->attack("xan");
   s->attack("xan");
   s->guardGate();
   c->highFivesGuys();
   delete c;
   delete s;
}