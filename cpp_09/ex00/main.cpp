/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:38 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/31 17:59:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

    if(ac != 2)
        std::cerr <<  "Error : could not open file. " << std::endl;
    else
    {
        std::map<std::string, float> data = BitcoinExchange::getData("data.csv");
        if (!data.empty())
            BitcoinExchange::__result(std::string(av[1]), data);
    }
}