/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:38 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/27 22:25:01 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)av;
    if(ac != 2)
        std::cerr <<  "Error : could not open file. " << std::endl;
    else
    {
        std::map<std::string, float> data = getData("data.csv");
        __result(std::string(av[1]), data);
    }
}