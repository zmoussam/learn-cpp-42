/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:09:33 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/31 18:05:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdio>


BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){ *this = copy; }
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {(void)copy; return *this; };
BitcoinExchange::~BitcoinExchange(){};

// read the data file and store the data in map<string , float> container
std::map<std::string , float> BitcoinExchange::getData(std::string dataFileName)
{
    std::ifstream dataFile;
    std::string _line;
    std::map<std::string , float> __result;
    char date[11];
    float _value;

    dataFile.open(dataFileName);
    if (!dataFile.is_open())
        std::cerr << "Error can't open file. " << std::endl;
    else 
    {
        std::getline(dataFile, _line);
        while(std::getline(dataFile, _line))
        {
            std::sscanf(_line.c_str(), "%10s,%f", date, &_value);
            __result[std::string(date)] = _value;
        }
        dataFile.close();
    }
    return __result;
}

//check if the header (date | value) valide or not
void BitcoinExchange::parsseHeader(std::istream &_inputDataFile)
{
    std::string _line;
    std::string header = "";

    std::getline(_inputDataFile, _line);
    for (size_t i = 0; i < _line.length(); i++)
    {
        if (_line[i] != ' ')
            header += _line[i];
    }
    if (header != "date|value")
        std::cerr << "Error: invalide header => " << _line << std::endl;
    else
        std::cout << "date | value " << std::endl;
}

// return true if the year is a leap year or not
bool BitcoinExchange::isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// check if a given date is in the correct format or not "YYYY-MM-DD"
bool BitcoinExchange::isValidDate(std::string date)
{
    int year, month, day;

    for (size_t i = 0; i < date.length(); i++)
    {   
        if (!std::isdigit(date[i]) && date[i] != '-')
            return false;
    }
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    if (std::sscanf(date.c_str(), "%4d-%2d-%2d", &year, &month, &day) != 3)
        return false;
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31 || (month == 2 && day > 29))
        return false;
    if (month == 2 && day == 29 && !BitcoinExchange::isLeapYear(year))
        return false;
    return true;
}

// remove the spaces in the input from the begin and the end  
std::string BitcoinExchange::trimInput(std::string input)
{
    size_t start = input.find_first_not_of(" ");
    size_t end = input.find_last_not_of(" ");
    if (start == std::string::npos)
        return "";
    return (input.substr(start, end - start + 1));
}

void BitcoinExchange::printResult(std::string _dataline, std::map<std::string , float> data)
{
    float _value;
    std::string _date = "";
    char _check[2];
    size_t pipePos = _dataline.find('|');
    if (pipePos == std::string::npos)
        std::cerr << "Error: bad input => " << _dataline << std::endl;
    else
    {
        _date = BitcoinExchange::trimInput(_dataline.substr(0, pipePos));
        if (!isValidDate(_date))
            std::cerr << "Error: bad input => " << _dataline << std::endl;
        else if (std::sscanf(_dataline.substr(pipePos + 1).c_str(), "%f%1s", &_value, _check) != 1)
            std::cerr << "Error: bad input => " << _dataline << std::endl;
        else if (_value < 0)
            std::cerr << "Error: not a positive number." << std::endl;
        else if (_value > 1000)
            std::cerr << "Error: too large a number." << std::endl;
        else
        {
            std::map<std::string, float>::iterator it = data.lower_bound(_date);
            if (it->first == _date || it == data.begin())
                std::cerr << _date << " => " << _value << " = " << it->second * _value << std::endl;
            else
                std::cerr << _date << " => " << _value << " = " << (--it)->second * _value << std::endl;  
        }
    }
}

void BitcoinExchange::__result(std::string __inputFileName, std::map<std::string, float> data)
{
    std::ifstream inputFile;
    std::string _line;
    std::string _key;
    std::string _trimedLine;


    inputFile.open(__inputFileName);
    if (!inputFile.is_open())
        std::cerr << "Error can't open file." << std::endl;
    else
    {
        BitcoinExchange::parsseHeader(inputFile);
        while (std::getline(inputFile, _line)) 
        {
            _trimedLine = BitcoinExchange::trimInput(_line);
            if (_trimedLine == "" || _trimedLine == "\n")
                continue;
            else 
                BitcoinExchange::printResult(_trimedLine, data);
        }
        inputFile.close();
    }
}