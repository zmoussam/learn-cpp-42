/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:31:24 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/22 19:01:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM__
#define  ROBOTOMYREQUESTFORM__
#include "AForm.hpp"

    class RobotomyRequestForm : public AForm
    {
        private:
            std::string target;
        public:
            RobotomyRequestForm();
            ~RobotomyRequestForm();
            RobotomyRequestForm(const std::string target);
            RobotomyRequestForm(const RobotomyRequestForm &copy);
            RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
            void execute(Bureaucrat const & executor) const;
    };  

#endif