/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:05:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 16:05:11 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Health(10), EnergyPoint(10), Damage(0){
    std::cout << "ClapTrap :: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), Health(10), EnergyPoint(10), Damage(0){
    std::cout << "new ClapTrap created with the name " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "ClapTrap :: copy constructor called " << std::endl;
   *this = copy;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap :: Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &copy){
    this->name = copy.getName();
    this->Health = copy.getHealth();
    this->EnergyPoint = copy.getEnergyPoint();
    this->Damage = copy.getDamage();
    return *this;
}

void ClapTrap::attack( const std::string& target ){
    if (this->EnergyPoint <= 0  || this->Health <= 0)
        std::cout << "ClapTrap " << this->name << " can't do anything " << std::endl;
    else {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " \
        << this->Damage << " points of Damage !" << std::endl;
        this->EnergyPoint--;    
    }
    
}

void ClapTrap::takeDamage( unsigned int amount ){
    if (this->EnergyPoint <= 0  || this->Health <= 0)
        std::cout << "ClapTrap " << this->name << " can't do anything " << std::endl;
    else{
        std::cout << "ClapTrap "<< this->name << " take " << amount << " points of Damage" << std::endl;
        this->Damage += amount;
    }
}

void ClapTrap::beRepaired( unsigned int amount ){
    if (this->EnergyPoint <= 0  || this->Health <= 0)
        std::cout << "ClapTrap " << this->name << " can't do anything " << std::endl;
    else{
        std::cout << "ClapTrap " << this->name << " be repaired" << std::endl;
        this->Health += amount;
        this->EnergyPoint--;
    }
}

int ClapTrap::getDamage() const{
    return this->Damage;    
}

int ClapTrap::getEnergyPoint() const{
    return this->EnergyPoint;    
}

int ClapTrap::getHealth() const {
    return this->Health;
}
std::string ClapTrap::getName() const{
    return this->name;
}
void ClapTrap::setDamage(int Damage){
    this->Damage = Damage;
}

void ClapTrap::setEnergyPoint(int EnergyPoint){
    this->EnergyPoint = EnergyPoint;
}

void ClapTrap::setHealth(int Health){
    this->Health = Health;
}

void ClapTrap::setName(std::string name){
    this->name = name;
}