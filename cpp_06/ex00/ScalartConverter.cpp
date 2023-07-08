/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalartConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:10:06 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 14:13:45 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Utils.hpp"

ScalarConverter::ScalarConverter()
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

void ScalarConverter::to_char(const std::string &input)
{
    if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
        std::cout << "char : " << input << std::endl;
    else {
        int c = static_cast<int>(std::atof(input.c_str()));
        if (!Utils::is_all_digits(input) && !Utils::is_fractionel(input))
            std::cout << "char : impossible" << std::endl;
        else if (std::isprint(c))
            std::cout << "char : '" << static_cast<char>(c) << "'" << std::endl;
        else if (!std::isprint(c))
            std::cout << "char : Non displayable" << std::endl;
        else
            std::cout << "char : impossible" << std::endl;
        }
}

void ScalarConverter::to_int(const std::string &input)
{
    int integer;

    integer = static_cast<int>(std::atof(input.c_str()));
    if (Utils::is_all_digits(input) || Utils::is_fractionel(input))
        std::cout << "int : " << integer << std::endl;
    else if (input == "+inf" || input == "+inff")
        std::cout << "int : +inf" << std::endl;
    else if (input == "-inf" || input == "-inff")
        std::cout << "int : -inf" << std::endl;
    else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
        std::cout << "int : " << static_cast<int>(input[1]) << std::endl;
    else 
        std::cout << "int : impossible" << std::endl;
}

void ScalarConverter::to_float(const std::string &input)
{
    float f;

    f = static_cast<float>(std::atof(input.c_str()));
    if (Utils::is_all_digits(input))
        std::cout << "float : " << f << ".0f" << std::endl;
    else if (Utils::is_fractionel(input))
    {
        if (f - static_cast<int>(f) != 0)
            std::cout << "float : " << f << "f" << std::endl;
        else
            std::cout << "float : " << f << ".0f" << std::endl;
    }
    else if (input == "+inf" || input == "+inff")
        std::cout << "float : +inff" << std::endl;
    else if (input == "-inf" || input == "-inff")
        std::cout << "float : -inff" << std::endl;
    else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
        std::cout << "float : " << static_cast<float>(input[1]) << ".0f" <<  std::endl;
    else if (input == "nan" || input == "nanf")
        std::cout << "float : nanf" << std::endl;
    else 
        std::cout << "float : impossible" << std::endl;
}

void ScalarConverter::to_double(const std::string &input)
{
    double d;

    d = std::atof(input.c_str());
    if (Utils::is_all_digits(input))
        std::cout << "double : " << d << ".0" << std::endl;
    else if (Utils::is_fractionel(input))
    {
        if (d - static_cast<int>(d) != 0)
            std::cout << "double : " << d << std::endl;
        else
            std::cout << "double : " << d << ".0" << std::endl;
    }
    else if (input == "+inf" || input == "+inff")
        std::cout << "double : +inf" << std::endl;
    else if (input == "-inf" || input == "-inff")
        std::cout << "double : -inf" << std::endl;
    else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
        std::cout << "double : " << static_cast<double>(input[1]) << ".0" <<  std::endl;
    else if (input == "nan" || input == "nanf")
        std::cout << "double : nan" << std::endl;
    else 
        std::cout << "double : impossible" << std::endl;
}

void ScalarConverter::convert(std::string argument)
{
    ScalarConverter::to_char(argument);
    ScalarConverter::to_int(argument);
    ScalarConverter::to_float(argument);
    ScalarConverter::to_double(argument);
}
