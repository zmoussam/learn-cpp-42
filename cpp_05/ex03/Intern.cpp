/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:53:00 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 02:33:50 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
   
}
    
Intern::~Intern()
{

}

Intern::Intern(const Intern &copy)
{
   *this = copy;
}

Intern & Intern::operator=(const Intern &copy)
{
   if (this == &copy)
      return *this;
   return *this;
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
   std::string name[3] = {
      "Presidential-form",
      "Robotomy-form",
      "Shrubbery-form"
   };
   
   AForm * cloneFunction[3];
   
   PresidentialPardonForm p;
   RobotomyRequestForm r;
   ShrubberyCreationForm s;
   
   cloneFunction[0] = &p;
   cloneFunction[1] = &r;
   cloneFunction[2] = &s;

   for (int i = 0; i < 3; i++)
   {
      if (formName == name[i])
      {
         std::cout << "Intern creates " << formName << std::endl;
         return cloneFunction[i]->clone(target);
      }
   }
   return nullptr;
}