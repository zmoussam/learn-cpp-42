/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:29:36 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 14:59:18 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug()
{
    std::cout << "Debug messages are messages that help \
troubleshoot an issue by revealing the internal state of the system" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Les informations sur le message vous \
permettent de savoir s'il a été envoyé, reçu, lu et quand."  << std::endl;  
}

void Harl::warning(void)
{
    std::cout << "A warning message is an advanced notice \
of a potential change that may result in loss of data or an error state" << std::endl;
}

void Harl::error(void)
{
    std::cout << "An error message is information displayed \
when an unforeseen problem occurs, usually on a computer or other device" << std::endl;
}

void Harl::complain(std::string level)
{
    size_t i = 0;
    void (Harl::*harlFunc[4])(void) = {
        &Harl::debug, 
        &Harl::error, 
        &Harl::info, 
        &Harl::warning
    };
    std::string msg[4] = {
        "DEBUG", 
        "ERROR", 
        "INFO", 
        "WARNING"
    };
    while (i < 4)
    {
        if(msg[i] == level)
            (this->*harlFunc[i])();
        i++;
    }
}