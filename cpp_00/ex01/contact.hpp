/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:35:36 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 20:41:02 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT__
    #define __CONTACT__

#include<iostream>

class contact
{
    public:
        contact(void);   
        ~contact(void);
        std::string getFirstName(void) const;
        std::string getLastName(void) const;
        std::string getNickName(void) const;
        std::string getDarkestSecret(void) const;
        static int getIndex(void);
        static void    addIndex(void);
        int getPhoneNumber(void) const;
        void setFirstName(std::string _firstName);
        void setLastName(std::string _lastName);
        void setNickName(std::string _nickName);
        void setDarkestSecret(std::string _darkestSecret);
        void setFirstName(int _phoneNumber);
    
    private:
        static int index;
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        int phoneNumber;
};

#endif