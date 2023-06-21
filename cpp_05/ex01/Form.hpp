/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:10:08 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 19:35:29 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM__
#define FORM__
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

    class Form
    {
        private:
            const std::string  name;
            bool signature;
            int const signGrade;
            const int executGrade;

        public:
            Form();
            ~Form();
            Form(const Form &copy);
            Form &operator=(const Form &copy);
            Form(const std::string & name, int signGrade, int executGrade, bool signature);
            void beSigned(Bureaucrat B);
            
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
    
std::ostream & operator<<(std::ostream &o, Form const &f);
#endif