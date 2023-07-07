/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:31:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 21:33:07 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

    Data *ptr = new Data;
    ptr->data = 42;
    uintptr_t u = Serializer::Serialize(ptr);


    std::cout << u << std::endl;
    Data *t = Serializer::deserialize(u);
    std::cout << t->data << std::endl;
    delete ptr;
}