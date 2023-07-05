/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalartConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:10:06 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/05 21:49:02 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(/* args */)
{

}
    
ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    (void)copy;
    return  *this;
}

void ScalarConverter::convert(std::string argument)
{
    char c;
    int integer;
    float f;
    double d;
    
    //check if the argument is nan
    if (argument == "nan")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (argument == "nanf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (argument == "-inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : -inff" << std::endl;
        std::cout << "double : -inf" << std::endl;
    }
    else if (argument == "+inff")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (argument == "-inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    else if (argument == "+inf")
    {
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
        std::cout << "float : nanf" << std::endl;
        std::cout << "double : nan" << std::endl;
    }
    //check if the argument is an char 
    // else if (argument.length() == 3 && argument[0] == '\'' && argument[2] == '\'')
        //convert char
    
    // std::cout << "char : " << argument << std::endl;
    // std::cout << "int : " << argument << std::endl;
    // std::cout << "float : " << argument << std::endl;
    // std::cout << "double : " << argument << std::endl;
}