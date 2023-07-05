/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:10:03 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/05 20:36:05 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER__
#define SCALARCONVERTER__
#include <iostream>
#include <string>

     class ScalarConverter
    {
        private:
        
        public:
            ScalarConverter();
            ~ScalarConverter();
            ScalarConverter(const ScalarConverter &copy);
            ScalarConverter &operator=(const ScalarConverter &copy);
            static void convert(std::string argument);
    };
    
#endif