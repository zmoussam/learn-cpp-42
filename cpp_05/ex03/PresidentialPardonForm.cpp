/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 02:08:57 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential-form", 25, 5, false)
{
    this->target = "X-Target";
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential-form", 25, 5, false)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
    this->target = copy.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
     if (this == &copy)
        return *this;
    this->target = copy.target;
    this->signature = copy.signature;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->signature)
        throw AForm::NotSignedExcepion();
    else if (executor.getGrade() > this->executGrade)
        throw AForm::GradeTooLowException();
    else
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

PresidentialPardonForm * PresidentialPardonForm::clone(std::string target)
{
    return new PresidentialPardonForm(target);
}