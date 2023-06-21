/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:49:01 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 20:57:49 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat b("harry", 100);
        Bureaucrat B(b);
        Form f("certificat", 10, 12, false);
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