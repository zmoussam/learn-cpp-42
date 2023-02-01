/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:35:39 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 16:34:07 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "contact.hpp"
#include<stdio.h>

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

std::string contact::getPhoneNumber(void) const 
{
    return this->phoneNumber;
}


std::string contact::getDarkestSecret(void) const
{
    return this->darkestSecret;
}

int _isallnum(std::string phoneNumber)
{ 
    int i = 0;
    while(phoneNumber[i])
    {
        if ((phoneNumber[i] < 48 || phoneNumber[i] > 57) 
        && (phoneNumber[i] != '+'))
            return 1;
        i++;  
    }
    return (0);
}

int isVide(std::string newChamp)
{
    int i = 0;

    if (std::cin.eof())
    {
        std::cout << "\nEOF !!" << std::endl;
        exit(0);
    }
    if (newChamp[i] == '\0')
        return 1;
    while(newChamp[i])
    {
        if (newChamp[i] != 32)
            return 0;
        i++;
    }
    return 1;
}

void contact::setFirstName(std::string _firstName)
{
    
    std::cout << "First Name : ";
    std::getline(std::cin, _firstName);
    while(isVide(_firstName))
    {
       std::cout << "  cannot add empty field !!" << std::endl;
       std::cout << "First Name : ";
       std::getline(std::cin, _firstName);
    }
    this->firstName = _firstName;
}

void contact::setLastName(std::string _lastName)
{
    std::cout << "Last Name : ";
    std::getline(std::cin, _lastName);
    while(isVide(_lastName))
    {
        std::cout << "  cannot add empty field !!" << std::endl;
        std::cout << "Last Name : ";
       std::getline(std::cin, _lastName);
    }
    this->lastName = _lastName;
}

void contact::setNickName(std::string _nickName)
{
    std::cout << "Nick Name : ";
    std::getline(std::cin, _nickName);
    while(isVide(_nickName))
    {
        std::cout << "  cannot add empty field !!" << std::endl;
        std::cout << "Nick Name : ";
        std::getline(std::cin, _nickName);
    }
    this->nickName = _nickName;
}

void contact::setDarkestSecret(std::string _darkestSecret)
{
    std::cout << "Darkest Secret : ";  
    std::getline(std::cin, _darkestSecret);
    while(isVide(_darkestSecret))
    {
        std::cout << "  cannot add empty field !!" << std::endl;
        std::cout << "Darkest Secret : ";
        std::getline(std::cin, _darkestSecret);
    }
    this->darkestSecret = _darkestSecret;
}

void contact::setPhoneNumber(std::string _phoneNumber)
{
    std::cout << "Phone Number : ";
    std::getline(std::cin, _phoneNumber);
    while((isVide(_phoneNumber) || _isallnum(_phoneNumber)))
    {
        std::cout << "  cannot add empty field !!\n  just digits required !!" << std::endl;
        std::cout << "Phone Number : ";
        std::getline(std::cin, _phoneNumber);
    }
    this->phoneNumber = _phoneNumber;
}

void    contact::addIndex(void)
{
    contact::index += 1;    
}

void    contact::setIndex(int _index)
{
    contact::index = _index;  
}

int contact::getIndex(void)
{
    return contact::index;    
}
