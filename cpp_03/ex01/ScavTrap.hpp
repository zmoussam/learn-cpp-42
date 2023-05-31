/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:39:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 16:21:52 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//-------------------------------------------------------------
// BASE CLASS | DERIVED CLASS   DERIVED CLASS   DERIVED CLASS |
//-------------------------------------------------------------
//            | Public MODE     Private MODE    Proteced MODE |  <<<<<<-------- Inheritance modes
//-------------------------------------------------------------
// Private    | Not Inherited   Not Inherited   Not Inherited |
// Protected  | Protected       Private         Protected     |
// Public     | Public          Private         Protected     |
//-------------------------------------------------------------

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