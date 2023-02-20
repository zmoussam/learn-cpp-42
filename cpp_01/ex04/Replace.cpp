/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:30:31 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 17:12:23 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include<iostream>
#include <fstream>
#include <string>

Replace::Replace(){
    return;
}

Replace::~Replace(){
    return;
}
int Replace::setOutputFile(const std::string outputFilePath)
{
   this->outputFile.open(outputFilePath);
    if (!this->outputFile.is_open())
    {
        std::cout << "cannot open " << outputFilePath << " file!!" << std::endl;
        return (0);
    }
    return (1);
    
}
int Replace::setInputFile(const std::string inputFilePath)
{
    this->inputFile.open(inputFilePath);
    if(!this->inputFile.is_open())
    {
        std::cout << "cannot open " << inputFilePath << " file!!" << std::endl;
        return (0);
    }
    return (1);
}
void Replace::readAndRplace(std::string oldStr, std::string newStr)
{
    std::string line;
    size_t index = 0;
    while(std::getline(this->inputFile, line))
    {
        index = line.find(oldStr);
        while(index != std::string::npos)
        {
            line.erase(index, oldStr.length());
            line.insert(index, newStr);
            index = line.find(oldStr.c_str(), index, oldStr.length());
        }
        this->outputFile << line << std::endl;
    }
}