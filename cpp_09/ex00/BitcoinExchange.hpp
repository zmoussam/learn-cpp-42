/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/28 19:56:50 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE__
#define BITCOINEXCHANGE__
#include <iostream>
#include <fstream>
#include <map>
#include <string>

    class BitcoinExchange
    {
        private:
            BitcoinExchange();
            BitcoinExchange(const BitcoinExchange &copy);
            BitcoinExchange &operator=(const BitcoinExchange &copy);
            ~BitcoinExchange();
            
        public:
            static std::map<std::string, float> getData(std::string __dataFileName);
            static void __result(std::string __inputFileData, std::map<std::string, float> data);
            static void parsseHeader(std::istream &inptutDataFile);
            static void printResult(std::string _dataLine, std::map<std::string , float> data);
            static bool isLeapYear(int year);
            static bool isValidDate(std::string date);
            static std::string trimInput(std::string input);
    };
    
#endif