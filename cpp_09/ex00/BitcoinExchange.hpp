/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/27 02:59:14 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE__
#define BITCOINEXCHANGE__
#include <iostream>
#include <map>
#include <string>
    class BitcoinExchange
    {
        public:
            BitcoinExchange();
            ~BitcoinExchange();
            BitcoinExchange(const BitcoinExchange &copy);
            BitcoinExchange &operator=(const BitcoinExchange &copy);
    };
    
std::map<std::string, float> getData(std::string dataFile);
#endif