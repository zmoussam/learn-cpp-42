/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:45:41 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 14:45:17 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "new Brain created" << std::endl;
}

Brain::Brain(const Brain &copy){
    *this = copy;
}

Brain::~Brain(){
    std::cout << "destructor for Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy){
    if (this == &copy)
        return *this;
    for (int i = 0 ; i < 100 ; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}



