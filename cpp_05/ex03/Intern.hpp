/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:53:03 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 01:01:08 by zmoussam         ###   ########.fr       */
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
    };
    
#endif 