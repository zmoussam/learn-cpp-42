/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:18:07 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/09 21:06:52 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

}

MateriaSource::MateriaSource(const MateriaSource &copy){
    *this = copy;
}

MateriaSource::~MateriaSource(){

}

MateriaSource & MateriaSource::operator=(const MateriaSource){
    return *this;
}

void MateriaSource::learnMateria(AMateria*){
    
}

AMateria* MateriaSource::createMateria(std::string const & type){
    
}