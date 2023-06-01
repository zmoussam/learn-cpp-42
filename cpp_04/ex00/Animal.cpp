/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:15:58 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/01 19:27:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "new animal created" << std::endl;
    this->type = "";
}

Animal::Animal(const Animal &copy){
    std::cout << "copy constructor for animal called" << std::endl;
    *this = copy;
}

Animal & Animal::operator=(const Animal &copy){
    this->type = copy.getType();
}

Animal::~Animal(){
    std::cout << "destructop for animal called" << std::endl; 
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound(){
    std::cout << "no sound" << std::endl;
}
