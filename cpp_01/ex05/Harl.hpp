/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:25:01 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/21 00:10:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__
#define __HARL__

#include<iostream>
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