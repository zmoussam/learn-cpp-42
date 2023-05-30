/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:48:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/30 17:15:13 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap s("scav");
    FragTrap f("frag");
    ClapTrap c("clap");

    
    c.attack("eco");
    s.attack("eco");
    f.attack("eco");
}