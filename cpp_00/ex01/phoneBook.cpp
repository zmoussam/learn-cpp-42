/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:33:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 22:40:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "phoneBook.hpp"
#include "contact.hpp"

phoneBook::phoneBook(void)
{
    return;
}

phoneBook::~phoneBook(void)
{
    return;
}

void phoneBook::searchContacts(void) const
{
    int i = 0;
    std::cout << "|   index   | first_Name | last_Name  | nick_Name  |" << std::endl;
    
    while(i < contact::getIndex())
    {
        std::cout << "|    " << i << "    | " << this->contacts[i].getFirstName() 
        << " | " << this->contacts[i].getLastName() << " | " 
        << this->contacts[i].getNickName() << " |" << std::endl;
        i++;
    }
}

void phoneBook::addContact(void)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;
    std::string phonenumber;
    int index = contact::getIndex();
    if (index == 8)
        index = 0; 
    this->contacts[index].setFirstName(firstName);
    this->contacts[index].setLastName(lastName);
    this->contacts[index].setNickName(nickName);
    this->contacts[index].setPhoneNumber(phonenumber);
    this->contacts[index].setDarkestSecret(darkestSecret);
        
    if (index < 7)
        contact::addIndex();
    // else if(index > 7)
}