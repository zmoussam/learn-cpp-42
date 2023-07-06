/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:16:27 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/06 20:07:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
     if (argc != 2) {
        std::cout << "Usage: ./Converter <value>" << std::endl;
        return 1;
    }
    else 
    {
        ScalarConverter::convert(argv[1]);
    }
}