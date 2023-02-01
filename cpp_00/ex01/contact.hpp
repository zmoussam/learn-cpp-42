/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:35:36 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 14:12:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT__
    #define __CONTACT__

#include<iostream>

int isVide(std::string newChamp);
int _isallnum(std::string phoneNumber);

class contact
{
    public:
        contact(void);   
        ~contact(void);
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getDarkestSecret(void) const;
        std::string getPhoneNumber(void) const;
        void setFirstName(std::string _firstName);
        void setLastName(std::string _lastName);
        void setNickName(std::string _nickName);
        void setDarkestSecret(std::string _darkestSecret);
        void setPhoneNumber(std::string _phoneNumber);
        static int getIndex(void);
        static void setIndex(int _index);
        static void addIndex(void);
    
    private:
        static int index;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string phoneNumber;
};

#endif