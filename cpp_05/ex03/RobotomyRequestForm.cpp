/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:22 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 02:09:55 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy-form", 72, 45, false)
{
    this->target = "X-Target";
}
    
RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy-form", 72, 45, false)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
    this->target = copy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this == &copy)
        return *this;
    this->target = copy.target;
    this->signature = copy.signature;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->signature)
        throw AForm::NotSignedExcepion();
    else if (executor.getGrade() > this->executGrade)
        throw AForm::GradeTooLowException();
    else 
    {
        std::srand(std::time(nullptr));

        if (std::rand() % 2)
            std::cout << this->target << " has been robotomized succsssfully " << std::endl;
        else
            std::cout << this->target << " the robotomy has been failed " << std::endl;
    }
}

RobotomyRequestForm * RobotomyRequestForm::clone(std::string target)
{
    return new RobotomyRequestForm(target);
}