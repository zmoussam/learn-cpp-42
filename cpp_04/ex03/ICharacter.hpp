/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:56:47 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/09 15:50:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER__
#define ICHARACTER__
#include <iostream>
#include <string>
class AMateria;
    
    class ICharacter
    {
        public:
            virtual ~ICharacter() {}
            virtual std::string const & getName() const = 0;
            virtual void equip(AMateria* m) = 0;
            virtual void unequip(int idx) = 0;
            virtual void use(int idx, ICharacter& target) = 0;
    };

#endif