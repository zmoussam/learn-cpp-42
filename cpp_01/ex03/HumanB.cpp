/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:11:52 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 01:22:13 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(){
    
}
HumanB::HumanB(std::string name){
    this->name = name;
}
HumanB::~HumanB(){
    std::cout << this->name << " : destroyed !" << std::endl;
}
void HumanB::setName(std::string name){
    this->name = name;
}
std::string HumanB::getName(void) const
{
    return this->name;
}
Weapon* HumanB::getWeapon(void) const
{
    return this->weapon;
}
void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}
void HumanB::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}