/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:13:25 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/09 19:03:15 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA__
#define AMATERIA__

#include <iostream>
#include <string>
class ICharacter; // Forward declaration
    class AMateria
    {
        protected:
            std::string type;
        public:
            AMateria();
            AMateria(const AMateria &copy);
            AMateria(std::string const & type);
            virtual ~AMateria();
            AMateria & operator=(const AMateria &copy);
            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter & target);
    };
    
#endif