/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 01:25:40 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 17:15:22 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include "Replace.hpp"

int main(int argc, char **argv)
{
    Replace _replace; 
    
    if (argc != 4)
        std::cout << "wrong argument !!" << std::endl;
    else if (_replace.setInputFile(argv[1]) && _replace.setOutputFile(std::string(argv[1]) + ".replace") \
        && !std::string(argv[2]).empty()) 
        _replace.readAndRplace(argv[2], argv[3]);
}