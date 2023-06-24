/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:11:23 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:14:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("XF") , signGrade(150) , executGrade(150), signature(false)
{

}

Form::Form(const std::string& name, int signGrade, int executGrade)
    : name(name),  signGrade(signGrade), executGrade(executGrade), signature(false) {
    if (signGrade < 1 || executGrade < 1)
        throw Form::GradTooHighException();
    else if (signGrade > 150 || executGrade > 150)
        throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(const Form &copy) : name(copy.name), signGrade(copy.signGrade), 
executGrade(copy.executGrade)
{
    *this = copy;
}

Form & Form::operator=(const Form &copy)
{
    if (this == &copy)
        return *this;
    this->signature = copy.signature;
    return *this;
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Form : Grade is too low !!";
}

const char * Form::GradTooHighException::what() const throw()
{
    return "Form : Grade is too high !!";
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSignature() const
{
    return this->signature;
}

int Form::getSignGrade() const
{
    return this->signGrade;
}

int Form::getExecuteGrade() const
{
    return this->executGrade;
}

void Form::beSigned(Bureaucrat B)
{
    if (B.getGrade() <= this->signGrade)
        signature = true;
    else
        throw Form::GradeTooLowException();
}
std::ostream & operator<<(std::ostream &o, Form const &f)
{   o << "\n|-----------------------------------";
    o << "\n|\tname : " << f.getName() << "\n|\tsignGrade : " << f.getSignGrade() << "\n|\texecuteGrade : " \
    << f.getExecuteGrade() << "\n|\tsignature : " << f.getSignature() << "\n|-----------------------------------";
    return o;
}