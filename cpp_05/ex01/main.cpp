/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:49:01 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:16:15 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat b("harry", 1);
        Bureaucrat B(b);
        Form f("certificat", 5, 12);
        Form g(f);
        // b.incrementGrade();
        // b.incrementGrade();
        // b.decrementGrade();
        // std::cout << b << std::endl;
        // std::cout << B << std::endl;
        b.signForm(f);
        b.signForm(g);
    }
    catch (std::exception &high)
    {
        std::cout << high.what() << std::endl;
    }
}