/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:06 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 20:27:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("XF"), signGrade(150), executGrade(150)
{
    this->signature = false;
}

AForm::AForm(const AForm & copy) : name(copy.name), signature(copy.signature), signGrade(copy.signGrade), executGrade(copy.executGrade)
{
    *this = copy;
}

AForm::~AForm()
{

}

AForm & AForm::operator=(const AForm &copy)
{
    if (this == &copy)
        return *this;
    this->signature = copy.signature;
    return *this;
}

AForm::AForm(const std::string & name, int signGrade, int executGrade, bool signature) :  name(name), signature(signature), 
signGrade(signGrade), executGrade(executGrade)
{

}

void AForm::beSigned(Bureaucrat const & B)
{
    if (B.getGrade() <= this->signGrade)
        signature = true;
    else
        throw AForm::GradeTooLowException();
}

std::string AForm::getName() const 
{
    return this->name;
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low !!";
}

const char * AForm::GradTooHighException::what() const throw()
{
    return "Grade is too high !!";
}
const char * AForm::NotSignedExcepion::what() const throw()
{
    return "Form not signed !!";
}