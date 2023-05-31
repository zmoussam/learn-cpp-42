/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:34:30 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/31 16:30:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP__
#define FRAGTRAP__
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

    class FragTrap : public ClapTrap
    {
        public:
            FragTrap();
            FragTrap(const FragTrap &copy);
            FragTrap(const std::string &name);
            ~FragTrap();
            FragTrap & operator=(const FragTrap &copy);
            void attack( const std::string& target );
            void highFivesGuys();
    };
#endif 