/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:33:37 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 21:34:40 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__
    #define __PHONEBOOK__
#include<iostream>
#include "contact.hpp"
#include<string>

using namespace std;
class phoneBook
{
    public:
        phoneBook(void);
        ~phoneBook(void);
        void searchContacts(void) const;
        void addContact(void);
        
    private:
        contact contacts[8];
           
};

#endif