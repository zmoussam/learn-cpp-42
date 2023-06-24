/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:14 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:20:05 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT__
#define BUREAUCRAT__
#include <iostream>
#include <exception>
#include <string>
class AForm;

    class Bureaucrat
    {
        private:
            const std::string name;
            int grade;
        public:
            Bureaucrat();
            ~Bureaucrat();
            Bureaucrat(const Bureaucrat &copy);
            Bureaucrat(std::string name, int grade); 
            Bureaucrat &operator=(const Bureaucrat &copy);
            int getGrade() const;
            std::string getName() const;
            void incrementGrade();
            void decrementGrade();
            void setGrade(const int grade);
            void signForm(AForm &F);
            void executeForm(AForm const & form);
            class GradeTooHighException : public std::exception
            {
                public:
                    const char * what() const throw();
            };
            
            class GradeTooLowException : public std::exception 
            {
                public:
                    const char * what() const throw();
            };
    };
    
std::ostream & operator<<(std::ostream &o, Bureaucrat const &b);

#endif