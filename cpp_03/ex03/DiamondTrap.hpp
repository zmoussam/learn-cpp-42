/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:09:54 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 14:43:51 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DIAMONDTRAP__
#define DIAMONDTRAP__
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string> 
    
    class DiamondTrap : public FragTrap, public ScavTrap{
        private:
            std::string name;
        
        public:
            DiamondTrap();
            DiamondTrap(const DiamondTrap &copy);
            DiamondTrap(const std::string &name);
            ~DiamondTrap();
            DiamondTrap &operator=(const DiamondTrap &copy);
            void attack(const std::string &target);
            void whoAmI();  
    };
    
#endif