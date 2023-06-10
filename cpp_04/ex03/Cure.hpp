/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:53:50 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 15:50:47 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE__
#define CURE__
#include "AMateria.hpp"
#include "ICharacter.hpp"
// class ICharacter;
    class Cure : public AMateria{

        public:
            Cure();
            Cure(const Cure &copy);
            ~Cure();
            Cure & operator=(const Cure &copy);
            AMateria *clone() const;
            void use(ICharacter &target);
    };
#endif