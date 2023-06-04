/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:24:44 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 13:53:50 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "new WrongAnimal created" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    std::cout << "copy constructor for WrongAnimal called" << std::endl;
    *this = copy;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &copy){
    this->type = copy.getType();
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "destructo for WrongAnimal called" << std::endl; 
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal's sound" << std::endl;
    return ;  
}
