/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:10:03 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 14:28:54 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER__
#define SCALARCONVERTER__
#include <iostream>
#include <string>

     class ScalarConverter
    {
        private:
            ScalarConverter();
        public:
            ~ScalarConverter();
            ScalarConverter(const ScalarConverter &copy);
            ScalarConverter &operator=(const ScalarConverter &copy);
            static void convert(std::string argument);
            static void to_char(const std::string &input);
            static void to_int(const std::string &input);
            static void to_float(const std::string &input);
            static void to_double(const std::string &input);
    };
    
#endif