/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:09 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 21:48:30 by zmoussam         ###   ########.fr       */
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
            ~AForm();
            AForm(const AForm &copy);
            AForm &operator=(const AForm &copy);
            AForm(const std::string & name, int signGrade, int executGrade, bool signature);
            virtual void beSigned(Bureaucrat B) = 0;
            void execute(Bureaucrat const & executor) const;
            std::string getName() const;
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
    };
    
std::ostream & operator<<(std::ostream &o, AForm const &f);
#endif