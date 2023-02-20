/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:27:10 by zmoussam          #+#    #+#             */
/*   Updated: 2023/02/20 16:49:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __REPLACE__
#define __REPLACE__

#include<iostream>
#include<fstream>

class Replace
{
    private:
        std::ifstream inputFile;
        std::ofstream outputFile;
    public:
        Replace();
        ~Replace();
        int setOutputFile(const std::string outPutFilePath);
        int setInputFile(const std::string inputFilePath);
        void readAndRplace(std::string oldStr, std::string newStr);
};

#endif