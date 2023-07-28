/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/27 22:25:18 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE__
#define BITCOINEXCHANGE__
#include <iostream>
#include <fstream>
#include <map>
#include <string>
    
std::map<std::string, float> getData(std::string __dataFileName);
void __result(std::string __inputFileData, std::map<std::string, float> data);
void parsseHeader(std::istream &inptutDataFile);
void printResult(std::string _dataLine, std::map<std::string , float> data);

#endif