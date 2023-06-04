/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:45:44 by zmoussam          #+#    #+#             */
/*   Updated: 2023/06/04 14:34:54 by zmoussam         ###   ########.fr       */
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
            std::string * getIdeas() const;
            
    };
#endif 