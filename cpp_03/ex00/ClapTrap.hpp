/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:42:42 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/30 20:45:52 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP__
#define CLAPTRAP__

#include <iostream>
#include <string>

    class ClapTrap
    {
        private:
            std::string name;
            int Health;
            int energyPoint;
            int damage;
                 
        public:
            ClapTrap();
            ClapTrap( const ClapTrap &copy );
            ClapTrap &operator=( const ClapTrap &copy);
            ~ClapTrap();
            ClapTrap( const std::string &name );
            int getHealth() const;
            int getEnergyPoint() const;
            int getDamage() const;
            std::string getName() const;
            void setHealth(int Health);
            void setEnergyPoint(int energyPoint);
            void setDamage(int damage);
            void setName(std::string name); 
            void attack( const std::string& target );
            void takeDamage( unsigned int amount );
            void beRepaired( unsigned int amount );        
    };
#endif