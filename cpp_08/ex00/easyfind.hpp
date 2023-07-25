/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/25 17:01:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND__
#define EASYFIND__
#include <iostream>

template<typename T>
int &easyfind(T _container, int _value)
{
    for (typename T::iterator it = _container.begin(); it != _container.end(); it++)
    {
        if (*it == _value)
            return *it;
    }
    throw std::exception();
}
#endif