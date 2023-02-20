/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:30 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 00:21:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
#define __ZOMBIE__

#include <iostream>

class Zombie{
    
    public:
        Zombie();
        ~Zombie();
        void announce(void) const;
        void setName(std::string _name);
    private:
        std::string name; 
};

Zombie* zombieHorde(int N, std::string name);

#endif