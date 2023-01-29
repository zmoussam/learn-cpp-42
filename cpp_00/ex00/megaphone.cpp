/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:49:15 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/29 21:19:01 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int argc, char *argv[])
{
    int i = 0;
    int j;
    
    if(argc > 1)
    {
        while(argv[++i])
        {
            j = 0;
            while(argv[i][j]) //check for each character
                std::cout << (char)std::toupper(argv[i][j++]);
        }   
    }
    else //if there is no argument
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}