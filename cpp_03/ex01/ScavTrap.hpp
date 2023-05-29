/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/29 19:25:45 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP__
#define SCAVTRAP__
#include "ClapTrap.hpp"

    class ScavTrap : public ClapTrap
    {
        public:
            ScavTrap();
            ScavTrap(std::string &name);
            ScavTrap(const ScavTrap &copy);
            ~ScavTrap();
            ScavTrap & operator=(const ScavTrap &copy); 
    };
    
#endif