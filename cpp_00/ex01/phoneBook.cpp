/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:33:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 20:50:38 by zmoussam         ###   ########.fr       */
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
  void addContact(void)
  {
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string phonenumber;
        
        getline(std::cin, firstName);
        getline(std::cin, lastName);
        getline(std::cin, nickName);
        getline(std::cin, darkestSecret);
        getline(std::cin, phonenumber);
        if (contact::getIndex() < 7)
            contact::addIndex();
  }