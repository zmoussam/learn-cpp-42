/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:34:24 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 17:23:20 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap :: Default constructor called" << std::endl;
    this->Health = 100;
    this->EnergyPoint = 100;
    this->Damage = 30;
}

FragTrap::FragTrap(const FragTrap &copy){
    std::cout << "FragTrap :: copy constructor called " << std::endl;
    *this = copy;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
    std::cout << "new FragTrap created with the name " << name << std::endl;  
    this->Health = 100;
    this->EnergyPoint = 100;
    this->Damage = 30;
}

FragTrap::~FragTrap(){
     std::cout << "FragTrap :: Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &copy){
    this->name = copy.getName();
    this->Health = copy.getHealth();
    this->EnergyPoint = copy.getEnergyPoint();
    this->Damage = copy.getDamage();
    return *this;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->name << " gives high fives!!" << std::endl;
}
void FragTrap::attack( const std::string& target ){
    if (this->EnergyPoint <= 0  || this->Health <= 0)
        std::cout << "FragTrap " << this->name << " can't do anything " << std::endl;
    else {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " \
        << this->Damage << " points of damage !" << std::endl;
        this->EnergyPoint--;    
    } 
}