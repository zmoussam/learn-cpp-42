/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/25 22:58:46 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND__
#define EASYFIND__
#include <iostream>

template<typename T>
typename T::iterator easyfind(T &_container, int _value)
{
    typename T::iterator it = find(_container.begin(), _container.end(), _value);
    if (it != _container.end())
        return it;
    throw std::runtime_error("Value not found !");
}
#endif