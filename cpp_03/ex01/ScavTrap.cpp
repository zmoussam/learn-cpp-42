/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:19 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/29 19:26:30 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    this->Health = 100;
    this->energyPoint = 50;
    this->damage = 20;
}

ScavTrap::ScavTrap(std::string &name){
    this->name = name;    
}
ScavTrap(const ScavTrap &copy);
~ScavTrap();
ScavTrap & operator=(const ScavTrap &copy); 