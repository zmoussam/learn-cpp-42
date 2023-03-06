/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:59:43 by zmoussam          #+#    #+#             */
/*   Updated: 2023/03/06 15:16:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc == 2)
    {
        harl.complain(std::string(argv[1]));
    //     harl.complain(std::string(argv[1]));
    //     harl.complain(std::string(argv[1]));
    //     harl.complain(std::string(argv[1]));
    }
    else
        std::cout << "no argument !!" << std::endl;
}