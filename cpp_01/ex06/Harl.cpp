/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:00:36 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 15:22:21 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]\nmessages are messages that help \
troubleshoot an issue \nby revealing the internal state of the system\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\nLes informations sur le message vous \
permettent de savoir s'il a \nété envoyé, reçu, lu et quand.\n"  << std::endl;  
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\nA warning message is an advanced notice \
of a potential change that may \nresult in loss of data or an error state\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\nAn error message is information displayed \
when an unforeseen problem \noccurs, usually on a computer or other device\n" << std::endl;
}

void Harl::complain(std::string level)
{
    size_t i = 0;
    void (Harl::*harlFunc[4])(void) = {
        &Harl::debug, 
        &Harl::info, 
        &Harl::warning,
        &Harl::error
    };
    std::string msg[4] = {
        "DEBUG", 
        "INFO", 
        "WARNING",
        "ERROR" 
    };
    while (i < 4)
    {
        if(msg[i] == level)
            break;
        i++;
    }
    switch (i)
    {
    case 0:
        (this->*harlFunc[0])();
    case 1:
        (this->*harlFunc[1])();
    case 2:
        (this->*harlFunc[2])();
    case 3:
        (this->*harlFunc[3])();
        break;
    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}