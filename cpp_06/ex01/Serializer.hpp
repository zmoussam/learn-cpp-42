/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:43:31 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 21:30:58 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER__
#define SERIALIZER__
#include <iostream>
#include "Data.hpp"

    class Serializer
    {  
        public:
            Serializer();
            Serializer(const Serializer &copy);
            ~Serializer();
            Serializer &operator=(const Serializer &copy);
            static uintptr_t Serialize(Data *ptr);
            static Data *deserialize(uintptr_t raw);
    };

#endif