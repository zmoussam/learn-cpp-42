/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:29:36 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 18:08:50 by zmoussam         ###   ########.fr       */
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
    permettent de savoir s'il a été envoyé, reçu, lu et \
    quand. Afficher les informations d'un message"  << std::endl;  
}

void Harl::warning(void)
{
    std::cout << "A warning message is an advanced notice\
    of a potential change that may result in loss of data or an error state" << std::endl;
}

void Harl::error(void)
{
    std::cout << "An error message is information displayed \
    when an unforeseen problem occurs, usually on a computer or other device" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*harlFunc)(void);
    
    std::cout << "you have to choose between these level!!\n \"WARNING\" \"DEBUG\" \
    \"INFO\" \"ERROR\" " << std::endl;
    
    (this->*harlFunc)();
}