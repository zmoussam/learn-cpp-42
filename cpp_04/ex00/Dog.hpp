/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:44:26 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/01 19:30:34 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG__
#define DOG__

#include "Animal.hpp"
#include <iostream>
 
    class Dog : public Animal 
    {
        public:
            Dog();
            Dog(const Dog &copy);
            ~Dog();
            Dog &operator=(const Dog &copy);
            void makeSound();
                    
    };
#endif