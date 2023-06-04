/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:05:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 13:22:40 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL__
#define ANIMAL__

#include <iostream>
#include <string>

    class Animal
    {
        protected:
            std::string type;
        public:
            Animal();
            Animal(const Animal &copy);
            virtual ~Animal();
            Animal &operator=(const Animal &copy);
            virtual void makeSound() const;
            std::string getType() const;
    };
#endif