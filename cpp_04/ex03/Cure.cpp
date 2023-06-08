/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:53:52 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/08 18:37:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure(){
    this->type = "cure";
}

Cure::Cure(const Cure &copy){
    *this = copy;
}

Cure::~Cure(){

}

Cure & Cure::operator=(const Cure &copy){
    this->type = copy.getType();
    return *this;
}

AMateria *Cure::clone() const{
    Cure *c = new Cure();
    return c;
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}