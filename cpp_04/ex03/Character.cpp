/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:10:09 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/08 16:33:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){

}

Character::Character(const Character &copy){
    *this = copy;
}

Character::~Character(){
    
}

Character &Character::operator=(const Character &copy){
    this->name = copy.getName();
    return *this;
}

std::string const &Character::getName() const{
    return this->name;
}

void Character::equip(AMateria *m){
    
}

void Character::unequip(int idx){

}

void Character::use(int idx, ICharacter &target){
    
}