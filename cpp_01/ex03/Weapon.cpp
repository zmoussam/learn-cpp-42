/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:07:42 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 14:38:50 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"      

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType() const
{
    return this->type;    
}

void Weapon::setType(std::string type)
{
    this->type = type;
} 