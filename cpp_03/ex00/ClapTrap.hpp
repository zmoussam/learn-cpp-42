/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:42:42 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/28 19:55:25 by zmoussam         ###   ########.fr       */
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
            int hitPoint;
            int EnergyPoint;
            int damage;
                 
        public:
            ClapTrap();
            ClapTrap( const ClapTrap &copy );
            ClapTrap &operator=( const ClapTrap &copy);
            ~ClapTrap();
            ClapTrap( std::string name );
            void attack( const std::string& target );
            void takeDamage( unsigned int amount );
            void beRepaired( unsigned int amount );        
    };
#endif