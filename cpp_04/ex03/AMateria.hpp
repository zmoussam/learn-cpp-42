/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:13:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/06 18:00:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA__
#define AMATERIA__

#include <iostream>
#include <string>
#include "ICharacter.hpp"

    class AMateria
    {
        protected:
            std::string type;
        public:
            AMateria(std::string const & type);
            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
    };
    
#endif