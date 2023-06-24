/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:09 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 16:26:13 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM__
#define AFORM__
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

    class AForm
    {
        protected:
            const std::string  name;
            bool signature;
            int const signGrade;
            const int executGrade;

        public:
            AForm();
            virtual ~AForm();
            AForm(const AForm &copy);
            AForm &operator=(const AForm &copy);
            AForm(const std::string & name, int signGrade, int executGrade, bool signature);
            void beSigned(Bureaucrat const & B);
            virtual void execute(Bureaucrat const & executor) const = 0;
            std::string getName() const;
            bool getSignature() const;
            int getSignGrade() const;
            int getExecuteGrade() const;
            class GradeTooLowException : public std::exception
            {
                public:
                    const char * what() const throw();
            };

            class GradTooHighException : public std::exception
            {
                public:
                    const char * what() const throw();
            };
            class NotSignedExcepion : public std::exception
            {
                public:
                    const char * what() const throw();
            };
    };
    
std::ostream & operator<<(std::ostream &o, AForm const &f);
#endif