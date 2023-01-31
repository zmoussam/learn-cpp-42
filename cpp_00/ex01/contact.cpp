/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:35:39 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 20:40:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "contact.hpp"

int contact::index = 0;

contact::contact(void)
{
    return;   
}

contact::~contact(void)
{
    return;   
}

std::string contact::getFirstName(void) const
{   
    return this->firstName;
}

std::string contact::getLastName() const
{
    return this->lastName;
}

std::string contact::getNickName(void) const
{
    return this->nickName;
}

int contact::getPhoneNumber(void) const 
{
    return this->phoneNumber;
}

int contact::getIndex(void)
{
    return contact::index;    
}

std::string contact::getDarkestSecret(void) const
{
    return this->darkestSecret;
}

void contact::setFirstName(std::string _firstName)
{
    this->firstName = _firstName;
}

void contact::setLastName(std::string _lastName)
{
    this->lastName = _lastName;
}

void contact::setNickName(std::string _nickName)
{
    this->nickName = _nickName;
}

void contact::setDarkestSecret(std::string _darkestSecret)
{
    this->darkestSecret = _darkestSecret;
}

void contact::setFirstName(int _phoneNumber)
{
    this->phoneNumber = _phoneNumber;
}
void    contact::addIndex(void)
{
    contact::index += 1;    
}
