/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:29 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/21 22:35:54 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM__
#define SHRUBBERYCREATIONFORM__
#include <iostream>
#include "AForm.hpp"
 
    class ShrubberyCreationForm : public AForm
    {
        private:
            std::string target;
        public:
            ShrubberyCreationForm();
            ~ShrubberyCreationForm();
            ShrubberyCreationForm(const ShrubberyCreationForm &copy);
            ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
            ShrubberyCreationForm(const std::string target);
    };

#endif