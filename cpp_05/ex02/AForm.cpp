/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:06 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:26:05 by zmoussam         ###   ########.fr       */
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

bool AForm::getSignature() const
{
    return this->signature;
}

int AForm::getSignGrade() const
{
    return this->signGrade;
}

int AForm::getExecuteGrade() const
{
    return this->executGrade;
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

std::ostream & operator<<(std::ostream &o, AForm const &f)
{   o << "\n|-----------------------------------";
    o << "\n|\tname : " << f.getName() << "\n|\tsignGrade : " << f.getSignGrade() << "\n|\texecuteGrade : " \
    << f.getExecuteGrade() << "\n|\tsignature : " << f.getSignature() << "\n|-----------------------------------";
    return o;
}