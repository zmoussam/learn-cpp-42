/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:18:07 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 15:41:08 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
    for(int i = 0 ; i < 4 ; i++){
        this->Materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy){
    *this = copy;
}

MateriaSource::~MateriaSource(){
    for(int i = 0 ; i < 4 ; i++){
        if (this->Materia[i])
            delete Materia[i];
    }
}

MateriaSource & MateriaSource::operator=(const MateriaSource &copy){
    for(int i = 0; i < 4 ; i++){
        this->Materia[i] = copy.Materia[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m){
    for(int i = 0 ; i < 4 ; i++){
        if (!this->Materia[i])
        {
            this->Materia[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for(int i = 0 ; i < 4 ; i++){
        if (this->Materia[i] && type == this->Materia[i]->getType())
            return (this->Materia[i]->clone());
    }
    return 0;
}