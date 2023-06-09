/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:10:12 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/09 15:46:42 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER__
#define CHARACTER__
#include "ICharacter.hpp"
#include <iostream>
#include <string>

    class Character : public ICharacter{
        private:
            std::string name;
            AMateria *inventory[4];
        public:
            Character();
            Character(const Character &copy);
            Character(std::string const &name);
            ~Character();
            Character &operator=(const Character &copy);
            std::string const &getName() const;
            void equip(AMateria *m);
            void unequip(int idx);
            void use(int idx, ICharacter &target);
    };
#endif