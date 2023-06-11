/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:00 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 14:47:22 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "new cat created" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy){
    std::cout << "copy constructor for Cat called" << std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << "destructor for Cat called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &copy){
    this->type = copy.getType();
     this->brain = new Brain(*copy.brain);
    // this->brain = copy.getBrain(); // for testing the shallow copy in main
    return *this;
}

void Cat::makeSound() const{
    std::cout << "mmiiiaaaaaaaaaw" << std::endl;
}

Brain *Cat::getBrain() const{
    return this->brain;
}

void Cat::setBrain(Brain *brain) {
    this->brain = brain;
}