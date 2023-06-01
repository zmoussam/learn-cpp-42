/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:05 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/01 19:30:37 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT__
#define CAT__

#include "Animal.hpp"
#include <iostream>

    class Cat : public Animal 
    {
        public:
            Cat();
            Cat(const Cat  &copy);
            ~Cat();
            Cat &operator=(const Cat &copy); 
            void makeSound();
    };
#endif 