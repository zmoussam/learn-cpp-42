/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:05:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/06 18:39:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL__
#define ANIMAL__

#include <iostream>
#include <string>

    class AAnimal
    {
        protected:
            std::string type;
        public:
            AAnimal();
            AAnimal(const AAnimal &copy);
            virtual ~AAnimal();
            virtual AAnimal &operator=(const AAnimal &copy);
            virtual void makeSound() const = 0;
            std::string getType() const;
    };
#endif