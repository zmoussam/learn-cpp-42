/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:05 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 21:22:54 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT__
#define CAT__

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

    class Cat : public AAnimal 
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