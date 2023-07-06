/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalartConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:10:06 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 00:40:30 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Utils.hpp"

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
    Utils::to_char(argument);
    Utils::to_int(argument);
    Utils::to_float(argument);
    Utils::to_double(argument);
}