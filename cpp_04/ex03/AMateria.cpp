/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:13:27 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/09 16:44:29 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(){
    this->type = "";
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
    this->type = copy.getType();
    return *this;
}

std::string const & AMateria::getType() const{
    return this->type;   
}