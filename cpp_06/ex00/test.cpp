/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:40:54 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/05 23:19:02 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string input = "nanf";
    float d = 0;
    if (input == "nan") {
    d = std::numeric_limits<double>::quiet_NaN();
    std::cout << d << std::endl;
    } else {
            std::cout << "double: impossible" << std::endl;
        }
}