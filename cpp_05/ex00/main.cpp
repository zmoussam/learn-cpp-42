/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:49:01 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:02:04 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b("harry", 1);
        Bureaucrat B(b);
        b.incrementGrade();
        b.incrementGrade();
        b.decrementGrade();
        std::cout << b << std::endl;
        std::cout << B << std::endl;
    }
    catch (std::exception &high)
    {
        std::cout << high.what() << std::endl;
    }
}