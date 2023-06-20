/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:55:56 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/20 21:26:47 by zmoussam         ###   ########.fr       */
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
            short grade;
        public:
            Bureaucrat();
            ~Bureaucrat();
    };

#endif