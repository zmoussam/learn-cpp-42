/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:30 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 14:42:16 by zmoussam         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif