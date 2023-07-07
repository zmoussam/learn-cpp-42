/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:31:17 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/07 21:00:12 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

    Data ptr = {55};

    // uintptr_t u = Serializer::Serialize(ptr);

    std::cout << Serializer::Serialize(&ptr) << std::endl;
    // delete ptr;
}