/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:36:29 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 00:54:48 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

Utils::Utils()
{
}
    
Utils::~Utils()
{
}

bool Utils::is_all_digits(const std::string &input)
{
    for (size_t i = 0; i < input.length(); i++) {
        if (!std::isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

int Utils::countElemen(const std::string &input, const char to_cout)
{
    int count = 0;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == to_cout)
            count++;
        else if (!std::isdigit(input[i]) && input[i] != 'f')
            return -1;
    }
    return count;
}

bool Utils::is_fractionel(const std::string &input)
{
    size_t found = input.find(".");
    size_t count;
    if (found == std::string::npos)
        return false;
    else if (!Utils::is_all_digits(input.substr(0, found)) \
    || input.substr(found + 1).length() == 0)
        return false;
    else
    {
        count = Utils::countElemen(input.substr(found + 1), 'f');
        if ((count == 1 && input[input.length() - 1] == 'f') \
        || count == 0 )
            return true;
    }
    return false;
}

void Utils::to_char(const std::string &input)
{
    if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
        std::cout << "char : " << input << std::endl;
    else {
        try
        {
            int c = std::atoi(input.c_str());
            if (!Utils::is_all_digits(input) && !Utils::is_fractionel(input))
                std::cout << "char : impossible" << std::endl;
            else if (std::isprint(c))
                std::cout << "char : '" << static_cast<char>(c) << "'" << std::endl;
            else 
                std::cout << "char : Non displayable" << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << "char : impossible" << std::endl;
        }
    }
}

void Utils::to_int(const std::string &input)
{
    int integer;
    try 
    {
        integer = std::stof(input);
        if (Utils::is_all_digits(input) || Utils::is_fractionel(input))
            std::cout << "int : " << integer << std::endl;
        else 
            std::cout << "int : impossible" << std::endl;
    }
    catch(std::exception &e)
    {
        if (input == "+inf" || input == "+inff")
            std::cout << "int : +inf" << std::endl;
        else if (input == "-inf" || input == "-inff")
            std::cout << "int : -inf" << std::endl;
        else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
            std::cout << "int : " << (int)(input[1]) << std::endl;
        else 
            std::cout << "int : impossible" << std::endl;
    }
}

void Utils::to_float(const std::string &input)
{
    float f;
    try
    {
        f = std::stof(input);
        if (Utils::is_all_digits(input) || Utils::is_fractionel(input))
            std::cout << "float : " << f << "f" << std::endl;
        else 
            std::cout << "float : impossible" << std::endl;
    }
    catch(std::exception &e)
    {
        if (input == "+inf" || input == "+inff")
            std::cout << "float : +inff" << std::endl;
        else if (input == "-inf" || input == "-inff")
            std::cout << "float : -inf" << std::endl;
        else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
            std::cout << "float : " << static_cast<float>(input[1]) << ".0f" <<  std::endl;
        else if (input == "nan" || input == "nanf")
            std::cout << "float : nanf" << std::endl;
        else 
            std::cout << "float : impossible" << std::endl;
    }
}

void Utils::to_double(const std::string &input)
{
    double d;
    try
    {
        d = std::stod(input);
        if (Utils::is_all_digits(input) || Utils::is_fractionel(input))
            std::cout << "double : " << d << std::endl;
        else 
            std::cout << "double : impossible" << std::endl;
    }
    catch(std::exception &e)
    {
        if (input == "+inf" || input == "+inff")
            std::cout << "double : +inff" << std::endl;
        else if (input == "-inf" || input == "-inff")
            std::cout << "double : -inf" << std::endl;
        else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
            std::cout << "double : " << static_cast<double>(input[1]) << ".0" <<  std::endl;
        else if (input == "nan" || input == "nanf")
            std::cout << "double : nan" << std::endl;
        else 
            std::cout << "double : impossible" << std::endl;
    }
}