/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:00:46 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 15:11:57 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__
#define __HARL__

#include<iostream>
#include <string>
class Harl
{       
    private:
       void debug(void);
       void info(void);
       void warning(void);
       void error(void);
    public:
       void complain(std::string level);
};

#endif