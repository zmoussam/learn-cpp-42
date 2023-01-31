/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifstream.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:13:49 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 17:28:39 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>

int main()
{
    std::ifstream ifs("numbers.txt");
    unsigned int dst;
    unsigned int dst2;
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();

    //--------------------------

    std::ofstream ofs("test.out");

    ofs << "i like ponies a whole damn lot" << std::endl;
    ofs.close();
}