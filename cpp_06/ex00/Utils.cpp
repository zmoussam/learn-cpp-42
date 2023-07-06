/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:36:29 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/06 23:00:42 by zmoussam         ###   ########.fr       */
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
    }
    return count;
}

bool Utils::is_fractionel(const std::string &input)
{
    size_t found = input.find(".");
    if (found == std::string::npos)
        return false;
    else if (!Utils::is_all_digits(input.substr(0, found)))
        return false;
        // check the fract part if contain all digit and f!!
    else
    {
        if (Utils::countElemen(input.substr(found + 1), '.') == 0 \
        && ((Utils::countElemen(input.substr(found + 1), 'f') == 1 && input[input.length() - 1] == 'f') \
        || Utils::countElemen(input.substr(found + 1), 'f') == 0))
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
            int c = static_cast<int>(std::stoi(input));
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

// void Utils::to_int(const std::string &input)
// {

// }

// void Utils::to_float(const std::string &input)
// {

// }

// void Utils::to_double(const std::string &input)
// {
    
// }