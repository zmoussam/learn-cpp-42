/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:11:49 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 01:18:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A__
#define __HUMAN_A__

#include<iostream>
#include "Weapon.hpp"

class HumanA{
    
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void setName(std::string name);
        std::string getName(void) const;
        void setWeapon(Weapon &weapon);
        Weapon& getWeapon(void) const;
        void attack() const;
    private:
        std::string name;
        Weapon &weapon;
};
#endif