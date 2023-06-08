/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:13:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/08 15:23:24 by zmoussam         ###   ########.fr       */
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
            AMateria();
            AMateria(const AMateria &copy);
            AMateria(std::string const & type);
            ~AMateria();
            AMateria & operator=(const AMateria &copy);
            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
    };
    
#endif