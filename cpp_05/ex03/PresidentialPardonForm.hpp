/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:19 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/24 02:08:04 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM__
#define PRESIDENTIALPARDONFORM__
#include <iostream>
#include <string>
#include "AForm.hpp"

    class PresidentialPardonForm : public AForm 
    {
        private:
            std::string target;
        public:
            PresidentialPardonForm();
            ~PresidentialPardonForm();
            PresidentialPardonForm(const std::string target);
            PresidentialPardonForm(const PresidentialPardonForm &copy);
            PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
            void execute(Bureaucrat const & executor) const;
            PresidentialPardonForm * clone(std::string target);
    };
#endif