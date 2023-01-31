/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:58:16 by zmoussam          #+#    #+#             */
/*   Updated: 2023/01/31 16:02:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    int numberOfBalls = 42;

    int* ballsPtr = &numberOfBalls;
    int& ballsRef = numberOfBalls;

    std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    *ballsPtr = 21;
    std::cout << numberOfBalls << std::endl;
    ballsRef = 84;
    std::cout << numberOfBalls << std::endl;
}