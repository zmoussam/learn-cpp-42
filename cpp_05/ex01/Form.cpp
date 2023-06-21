/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:11:23 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 19:31:33 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("X") , signature(false), signGrade(150) , executGrade(150)
{

}

Form::Form(const std::string& name, int signGrade, int executGrade, bool signature)
    : name(name), signature(signature), signGrade(signGrade), executGrade(executGrade) {

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
    return "Grade is too low !!";
}

const char * Form::GradTooHighException::what() const throw()
{
    return "Grade is too high !!";
}

void Form::beSigned(Bureaucrat B)
{
    if (B.getGrade() <= this->signGrade)
        signature = true;
    else
        throw Form::GradeTooLowException();
}