/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:15:58 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/06 13:48:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "new animal created" << std::endl;
    this->type = "";
}

AAnimal::AAnimal(const AAnimal &copy){
    std::cout << "copy constructor for animal called" << std::endl;
    *this = copy;
}

AAnimal & AAnimal::operator=(const AAnimal &copy){
    this->type = copy.getType();
    return *this;
}

AAnimal::~AAnimal(){
    std::cout << "destructor for animal called" << std::endl; 
}

std::string AAnimal::getType() const{
    return this->type;
}

void AAnimal::makeSound() const{
    return ;  
}
