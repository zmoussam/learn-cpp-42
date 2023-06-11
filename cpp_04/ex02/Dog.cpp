/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:09 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 21:23:07 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(){
    std::cout << "new Dog created" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &copy){
    std::cout << "copy constructor for dog called" << std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << "destructor for Dog called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(const Dog &copy){
   this->type = copy.getType();
    this->brain = new Brain(*copy.brain);
   return *this;
}

void Dog::makeSound() const{
    std::cout << "haaaoow haoow" << std::endl;
}

Brain *Dog::getBrain() const{
    return this->brain;
}

void Dog::setBrain(Brain *brain) {
    this->brain = brain;
}