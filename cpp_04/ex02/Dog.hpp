/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:44:26 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 21:23:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG__
#define DOG__

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
 
    class Dog : public AAnimal 
    {
        private:
            Brain *brain;
        public:
            Dog();
            Dog(const Dog &copy);
            ~Dog();
            Dog &operator=(const Dog &copy);
            Brain *getBrain() const;
            void setBrain(Brain *brain);
            void makeSound() const;         
    };
#endif