/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:31:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/08 14:43:24 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

    Data *ptr = new Data;
    ptr->data = 0;
    
    uintptr_t u = Serializer::Serialize(ptr);
    std::cout << u << std::endl;

    Data *t = Serializer::deserialize(u);
    if (t)
        std::cout << t->data << std::endl;
    
    delete ptr;
}