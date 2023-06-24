/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:53:03 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 17:33:35 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN__
#define INTERN__
#include <iostream>
#include <string>
class AForm;

    class Intern
    {
        private:
            /* data */
        public:
            Intern();
            ~Intern();
            Intern(const Intern &copy);
            Intern &operator=(const Intern &copy);
            AForm * makeForm(std::string formName, std::string target);
            class FormNotFount : public std::exception
            {
                public:
                    const char * what() const throw();
            };
    };
    
#endif 