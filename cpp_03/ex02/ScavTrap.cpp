/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:19 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 16:28:49 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap :: Default constructor called" << std::endl;
    this->Health = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
    std::cout << "new ScavTrap created with the name " << name << std::endl;   
    this->Health = 100;
    this->EnergyPoint = 50;
    this->Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
    std::cout << "ScavTrap :: copy constructor called " << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap :: Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy){
    this->name = copy.getName();
    this->Health = copy.getHealth();
    this->EnergyPoint = copy.getEnergyPoint();
    this->Damage = copy.getDamage();
    return *this; 
}

void ScavTrap::guardGate(){
    
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack( const std::string& target ){
    if (this->EnergyPoint <= 0  || this->Health <= 0)
        std::cout << "ScavTrap " << this->name << " can't do anything " << std::endl;
    else {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " \
        << this->Damage << " points of damage !" << std::endl;
        this->EnergyPoint--;    
    }
}