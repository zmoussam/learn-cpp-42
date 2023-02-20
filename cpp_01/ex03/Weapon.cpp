/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:07:42 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 01:16:05 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"      

Weapon::Weapon()
{
    return;
}
Weapon::~Weapon()
{
    return;
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