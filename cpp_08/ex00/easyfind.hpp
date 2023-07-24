/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:10:35 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/24 23:01:09 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND__
#define EASYFIND__

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