/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:24:51 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 13:31:30 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT__
#define WRONGCAT__

#include "WrongAnimal.hpp"
#include <iostream>

    class WrongCat : public WrongAnimal 
    {
        public:
            WrongCat();
            WrongCat(const WrongCat  &copy);
            ~WrongCat();
            WrongCat &operator=(const WrongCat &copy); 
            void makeSound() const;
    };
#endif 