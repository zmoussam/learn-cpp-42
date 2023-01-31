/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:00:43 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 21:56:15 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"contact.hpp"
#include"phoneBook.hpp"

int main()
{
    phoneBook rep;
    std::string cmd;

    std::cout << "\e[0;35m➜ Contacts : \e[0m "; 
    std::getline(std::cin, cmd);
    while(true)
    {
        if(cmd == "ADD")
            rep.addContact();
        else if(cmd == "SEARCH")
            rep.searchContacts();
        else if(cmd == "EXIT")
            exit(0);
        else   
            std::cout << "choose between ADD, SEARCH or EXIT :(" << std::endl;
        
        std::cout << "\e[0;35m➜ Contacts : \e[0m "; 
        std::getline(std::cin, cmd);
    }
}