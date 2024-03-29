/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:00 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 13:23:17 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "new cat created" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy){
    std::cout << "copy constructor for Cat called" << std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << "destructor for Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
    this->type = copy.getType();
    return *this;
}

void Cat::makeSound() const{
    std::cout << "mmiiiaaaaaaaaaw" << std::endl;
}