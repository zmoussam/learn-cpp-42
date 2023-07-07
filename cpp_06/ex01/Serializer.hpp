/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:43:31 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 21:01:44 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER__
#define SERIALIZER__
#include <iostream>
#include "Data.hpp"
#include <cstdint>

    class Serializer
    {       
        public:
            Serializer();
            ~Serializer();
            Serializer(const Serializer &copy);
            Serializer &operator=(const Serializer &copy);
            static uintptr_t Serialize(Data *ptr);
            static Data *deserialize(uintptr_t raw);
    };

#endif