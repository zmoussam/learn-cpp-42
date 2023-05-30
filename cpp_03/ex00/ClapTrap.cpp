/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:05:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/30 20:45:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Health(10), energyPoint(10), damage(0){
    std::cout << "ClapTrap :: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), Health(10), energyPoint(10), damage(0){
    std::cout << "new ClapTrap created with the name " << name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "copy constructor called " << std::endl;
   *this = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &copy){
    this->name = copy.getName();
    this->Health = copy.getHealth();
    this->energyPoint = copy.getEnergyPoint();
    this->damage = copy.getDamage();
    return *this;
}

void ClapTrap::attack( const std::string& target ){
    if (this->energyPoint <= 0  || this->Health <= 0)
        std::cout << "ClapTrap " << this->name << " can't do anything " << std::endl;
    else {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " \
        << this->damage << " points of damage !" << std::endl;
        this->energyPoint--;    
    }
    
}

void ClapTrap::takeDamage( unsigned int amount ){
    if (this->energyPoint <= 0  || this->Health <= 0)
        std::cout << "ClapTrap " << this->name << " can't do anything " << std::endl;
    else{
        std::cout << "ClapTrap "<< this->name << " take " << amount << " points of damage" << std::endl;
        this->damage += amount;
    }
}

void ClapTrap::beRepaired( unsigned int amount ){
    if (this->energyPoint <= 0  || this->Health <= 0)
        std::cout << "ClapTrap " << this->name << " can't do anything " << std::endl;
    else{
        std::cout << "ClapTrap " << this->name << " be repaired" << std::endl;
        this->Health += amount;
        this->energyPoint--;
    }
}

int ClapTrap::getDamage() const{
    return this->damage;    
}

int ClapTrap::getEnergyPoint() const{
    return this->energyPoint;    
}

int ClapTrap::getHealth() const {
    return this->Health;
}
std::string ClapTrap::getName() const{
    return this->name;
}
void ClapTrap::setDamage(int damage){
    this->damage = damage;
}

void ClapTrap::setEnergyPoint(int energyPoint){
    this->energyPoint = energyPoint;
}

void ClapTrap::setHealth(int Health){
    this->Health = Health;
}

void ClapTrap::setName(std::string name){
    this->name = name;
}