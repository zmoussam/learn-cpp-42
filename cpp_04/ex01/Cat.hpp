/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:05 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 18:57:55 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT__
#define CAT__

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

    class Cat : public Animal 
    {
        private:
            Brain *brain;
        public:
            Cat();
            Cat(const Cat  &copy);
            ~Cat();
            void setBrain(Brain *brain);
            Cat &operator=(const Cat &copy); 
            Brain *getBrain() const;
            void makeSound() const;
    };
#endif 