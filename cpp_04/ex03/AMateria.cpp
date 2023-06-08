/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:13:27 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/08 18:24:26 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){

}

AMateria::AMateria(const AMateria &copy){
    *this = copy;
}

AMateria::AMateria(std::string const & type){
    this->type = type;
}

AMateria::~AMateria(){

}

AMateria &AMateria::operator=(const AMateria &copy){
    
    return *this;
}

std::string const & AMateria::getType() const{
    return this->type;   
}

AMateria* AMateria::clone() const {}

void AMateria::use(ICharacter& target){
       
}