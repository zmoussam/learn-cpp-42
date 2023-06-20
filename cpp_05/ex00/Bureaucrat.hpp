/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:55:56 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/20 23:42:47 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT__
#define BUREAUCRAT__
#include <iostream>
#include <string>

    class Bureaucrat
    {
        private:
            std::string name;
            int grade;
        public:
            Bureaucrat(const Bureaucrat &copy);
            Bureaucrat();
            ~Bureaucrat();
            Bureaucrat &operator=(const Bureaucrat &copy);
            class GradeTooHighException
            {

            };
            class GradeTooLowException
            {
                
            };

    };
std::ostream & operator<<(std::ostream &o, Bureaucrat const &f);

#endif