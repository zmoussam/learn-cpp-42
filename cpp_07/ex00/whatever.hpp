/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:51:27 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/15 15:11:43 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER__
#define WHATEVER__

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

#endif