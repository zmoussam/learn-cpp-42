/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:45:44 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/10 18:50:06 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN__
#define BRAIN__
#include <iostream>
#include <string>

    class Brain 
    {
        private:
            std::string ideas[100];
        public:
            Brain();
            Brain(const Brain &copy);
            ~Brain();
            Brain &operator=(const Brain &copy);
            const std::string *getIdeas() const;
            void setIdeas(std::string * ideas);
            
    };
#endif 