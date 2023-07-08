/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:36:29 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 14:18:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

Utils::Utils()
{
}
    
Utils::~Utils()
{
}

Utils::Utils(const Utils &copy)
{
    *this = copy;
}

Utils &Utils::operator=(const Utils &copy)
{
    (void)copy;
    return *this;
}

bool Utils::is_all_digits(const std::string &input)
{
    size_t j = 0;
    if (input[0] == '+' || input[0] == '-')
        j++;
    for (size_t i = j; i < input.length(); i++) {
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