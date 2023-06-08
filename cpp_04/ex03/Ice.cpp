/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:53:56 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/08 18:38:19 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(){
    this->type = "Ice";
}

Ice::Ice(const Ice &copy){
    *this = copy;
}

Ice::~Ice(){

}

Ice &Ice::operator=(const Ice &copy){
    this->type = copy.getType();
    return *this;
}

AMateria* Ice::clone() const{
    Ice *I = new Ice();
    return I;
}

void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
} 