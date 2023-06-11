/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:53:47 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/11 14:01:45 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE__
#define ICE__
#include "AMateria.hpp"
#include "ICharacter.hpp"
    class Ice : public AMateria{

        public:
            Ice();
            Ice(const Ice &copy);
            ~Ice();
            Ice &operator=(const Ice &copy);
            AMateria* clone() const;
            void use(ICharacter &target);   
    };
    
#endif