/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/29 19:58:00 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP__
#define SCAVTRAP__
#include "ClapTrap.hpp"

    class ScavTrap : public ClapTrap
    {
        public:
            ScavTrap();
            ScavTrap(const std::string &name);
            ScavTrap(const ScavTrap &copy);
            ~ScavTrap();
            void guardGate();
            ScavTrap & operator=(const ScavTrap &copy);
            void attack( const std::string& target );
    };
    
#endif