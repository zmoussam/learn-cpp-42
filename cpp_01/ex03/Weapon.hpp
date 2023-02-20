/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:07:32 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 01:03:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__
#define __WEAPON__

#include<iostream>

class Weapon{
      
      public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void setType(std::string type); 
        
      private:
        std::string type;
};

#endif