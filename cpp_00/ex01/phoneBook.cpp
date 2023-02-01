/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:33:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 16:32:57 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "phoneBook.hpp"
#include "contact.hpp"
#include<iomanip>

phoneBook::phoneBook(void)
{
    return;
}

phoneBook::~phoneBook(void)
{
    return;
}

std::string truncatedString(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else 
        return str;
}

void phoneBook::searchContacts(void) const
{
    int i = 0;
    std::string s_index;
    int i_index;
    std::cout << "|  index   |FirstName | LastName | NickName |" << std::endl;
    
    while(i < 8)
    {
        std::cout << "|" << std::setw(6) << i << std::setw(5) << "|" 
        << std::setw(10) << truncatedString(this->contacts[i].getFirstName()) 
        << "|" << std::setw(10) << truncatedString(this->contacts[i].getLastName()) << "|" 
        << std::setw(10) << truncatedString(this->contacts[i].getNickName()) << "|" << std::endl;
        i++;
    }
    std::cout << "put index : ";
    std::getline(std::cin, s_index);
    while(isVide(s_index) || _isallnum(s_index) || (std::stoi(s_index) > 7 || std::stoi(s_index) < 0))
    {
       std::cout << "  cannot add empty field!!\n  just digits required !!\n  index btw 0 --> 7" << std::endl;
       std::cout << "put index: ";
       std::getline(std::cin, s_index);
    }
    i_index = std::stoi(s_index);
    std::cout << "First Name     : " << this->contacts[i_index].getFirstName() << "\n" 
    << "Last Name      : " << this->contacts[i_index].getLastName() << "\n" 
    << "Nick Name      : "<< this->contacts[i_index].getNickName() << "\n"
    << "Phone Number   : "<< this->contacts[i_index].getPhoneNumber() << "\n"
    << "Darkest Secret : "<< this->contacts[i_index].getDarkestSecret() << std::endl;
    
}

void phoneBook::addContact(void)
{
    std::string firstName = "";
    std::string lastName = "";
    std::string nickName = "";
    std::string darkestSecret = "";
    std::string phonenumber = "";
    int index = contact::getIndex();
    if(index > 7)
    {
        contact::setIndex(0);
        index = contact::getIndex();
    }
    this->contacts[index].setFirstName(firstName);
    this->contacts[index].setLastName(lastName);
    this->contacts[index].setNickName(nickName);
    this->contacts[index].setPhoneNumber(phonenumber);
    this->contacts[index].setDarkestSecret(darkestSecret);
    contact::addIndex();
}