/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:48:58 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:06:11 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("XB")
{
    this->grade = 150;
}
    
Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    this->grade = 150;
    this->setGrade(grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    if(this == &copy)
        return *this;
    this->grade = copy.grade;
    return *this;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::setGrade(const int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;        
}

void Bureaucrat::incrementGrade()
{
    this->setGrade(this->grade - 1);
}

void Bureaucrat::decrementGrade()
{
    this->setGrade(this->grade + 1);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{ 
    return "Bureaucrat : grade is too high !!";
}

const char * Bureaucrat::GradeTooLowException::what() const  throw()
{
    return "Bureaucrat : grade is too low !!";
}

void Bureaucrat::signForm(Form F)
{
    try {
        F.beSigned(*this);
        std::cout << *this << " signed " << F << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << *this << " couldn't sign " << F << "\nbecause " << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &b)
{
    o << b.getName() << ", bureaucrat grade " << b.getGrade();
    return o;
}
