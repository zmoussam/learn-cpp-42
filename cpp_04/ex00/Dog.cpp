/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:09 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 14:55:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "new Dog created" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy){
    std::cout << "copy constructor for dog called" << std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << "destructor for Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
   this->type = copy.getType();
   return *this;
}

void Dog::makeSound() const{
    std::cout << "haaaoow haoow" << std::endl;
}


