/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:06:30 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/01 20:14:05 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
    #define __ZOMBIE
    
#include<iostream>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);     
    private:
        std::string name;      
};

#endif