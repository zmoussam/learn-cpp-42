/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:11:54 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 01:20:30 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B__
#define __HUMAN_B__

#include<iostream>
#include "Weapon.hpp"

class HumanB{
    
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void setName(std::string name);
        std::string getName(void) const;
        void setWeapon(Weapon weapon);
        Weapon* getWeapon(void) const;
        void attack() const;
    private:
        Weapon *weapon;
        std::string name;
};
#endif