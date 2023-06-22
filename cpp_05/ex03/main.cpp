/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:12 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 22:43:38 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try{
        Bureaucrat b("harry", 1);
        Bureaucrat B(b);
        AForm *s = new ShrubberyCreationForm("home");
        AForm *p = new PresidentialPardonForm("Presedent");
        AForm *r = new RobotomyRequestForm("Robo");
        b.signForm(*s);
        b.signForm(*p);
        b.signForm(*r);
        s->beSigned(b);
        s->execute(b);
        b.executeForm(*s);
        b.executeForm(*p);
        b.executeForm(*r);
        // AForm f("certificat", 10, 12, false);
        // AForm g(f);
        // // b.incrementGrade();
        // b.incrementGrade();
        // b.decrementGrade();
        // std::cout << b << std::endl;
        // std::cout << B << std::endl;
        // b.signForm(f);
        // b.signForm(g);
        delete s;
        delete p;
        delete r;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}