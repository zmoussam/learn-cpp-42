/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/27 04:32:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

BitcoinExchange::BitcoinExchange()
{
}
    
BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string , float> getData(std::string dataFile)
{
    std::ifstream inputFile;
    std::string line;
    std::map<std::string , float> result;
    std::string _key;
    float _value;

    inputFile.open(dataFile);
    if (!inputFile.is_open())
    {
        std::cerr << "Error can't open file. " << std::endl;
    }
    else 
    {
        std::getline(inputFile, line);
        while(std::getline(inputFile, line))
        {
            _key = line.substr(0, line.find(','));
            _value = std::atof(line.substr(line.find(',') + 1, line.length() - _key.length() - 2).c_str());
            result[_key] = _value;
        }
        inputFile.close();
    }
    return result;
} 