/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:48:58 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 19:00:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "X";
    this->grade = 150;
}
    
Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
    this->grade = 150;
    this->setGrade(grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    if(this == &copy)
        return *this;
    this->grade = copy.grade;
    this->name = copy.name;
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
    return "Grade is too high !!";
}

const char * Bureaucrat::GradeTooLowException::what() const  throw()
{
    return "Grade is too low !!";
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &f)
{
    o << f.getName() << ", bureaucrat grade " << f.getGrade();
    return o;
}