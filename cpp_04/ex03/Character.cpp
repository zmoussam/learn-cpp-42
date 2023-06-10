/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:10:09 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 16:24:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character(){
    this->name = "";
    for(int i = 0 ; i < 4 ; i++){
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character &copy){
    *this = copy;
}

Character::Character(std::string const &name){
    this->name = name;
    for(int i = 0 ; i < 4 ; i++){
        this->inventory[i] = NULL;
    }
}

Character::~Character(){
    for(int i = 0 ; i < 4 ; i++){
        if (this->inventory[i])
            delete inventory[i];
    }
}

Character &Character::operator=(const Character &copy){
    this->name = copy.getName();
    for(int i = 0 ; i < 4 ; i++){
        if (copy.inventory[i]){
            delete this->inventory[i];
            this->inventory[i] = copy.inventory[i]->clone(); 
        }
    }
    return *this;
}

std::string const &Character::getName() const{
    return this->name;
}

void Character::equip(AMateria *m){
    for(int i = 0; i < 4; i++){
        if (!this->inventory[i]){
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
    if (idx >= 0 && idx < 4 && this->inventory[idx])
        this->inventory[idx]->use(target);
}