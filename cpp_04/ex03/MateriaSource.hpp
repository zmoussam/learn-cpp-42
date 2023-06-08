/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:18:05 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/08 17:06:37 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE__
#define MATERIASOURCE__

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource() {}
        MateriaSource & operator=(const MateriaSource);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif