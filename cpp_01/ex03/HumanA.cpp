/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:11:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 01:23:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon): name(_name), weapon(_weapon){
    
};
HumanA::~HumanA(){
    std::cout << this->name << " : destroyed! " << std::endl;
};

// void HumanA::setName(std::string name){
//     this->name = name;
// }
// std::string HumanA::getName(void) const
// {
//     return this->name;
// }
// void HumanA::setWeapon(Weapon &weapon)
// {
//     this->weapon = weapon;
// }
// Weapon& HumanA::getWeapon(void) const
// {
//     return this->weapon;
// }
void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}