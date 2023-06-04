/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:24:47 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 13:29:09 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL__
#define WRONGANIMAL__

#include <iostream>
#include <string>

    class WrongAnimal
    {
        protected:
            std::string type;
        public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &copy);
           ~WrongAnimal();
            WrongAnimal &operator=(const WrongAnimal &copy);
            void makeSound() const;
            std::string getType() const;
    };
#endif