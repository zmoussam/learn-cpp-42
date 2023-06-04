/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:44:26 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 14:03:19 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG__
#define DOG__

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
 
    class Dog : public Animal 
    {
        private:
            Brain *idea;
        public:
            Dog();
            Dog(const Dog &copy);
            ~Dog();
            Dog &operator=(const Dog &copy);
            void makeSound() const;         
    };
#endif