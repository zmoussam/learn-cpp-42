/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:18:05 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/09 21:12:27 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE__
#define MATERIASOURCE__

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

    class MateriaSource : public IMateriaSource
    {
        private:
            AMateria *Materia[4];
        public:
            MateriaSource();
            MateriaSource(const MateriaSource &copy);
            ~MateriaSource();
            MateriaSource & operator=(const MateriaSource &copy);
            void learnMateria(AMateria *m);
            AMateria* createMateria(std::string const & type);
    };
    
#endif