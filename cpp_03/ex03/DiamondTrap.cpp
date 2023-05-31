/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:08:52 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 14:49:17 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap :: Default constructor called" << std::endl;
    this->name = ClapTrap::name;
    this->Health = 100;
    this->energyPoint = 100;
    this->damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
    *this = copy;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name){
    
}

DiamondTrap::~DiamondTrap(){
    
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy){
    
}
void DiamondTrap::attack(const std::string &target){
    
}

void DiamondTrap::whoAmI(){
    
}