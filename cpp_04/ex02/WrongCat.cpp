/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:24:49 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 13:31:47 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "new WrongCat created" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy){
    std::cout << "copy constructor for WrongCat called" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat(){
    std::cout << "destructor for WrongCat called" << std::endl;
    
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
   this->type = copy.getType();
   return *this;
}

void WrongCat::makeSound() const{
    std::cout << "miaaaaaaw " << std::endl;
}