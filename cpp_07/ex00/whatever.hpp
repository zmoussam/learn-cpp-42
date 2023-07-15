/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:39:06 by zakaria           #+#    #+#             */
/*   Updated: 2023/07/13 20:39:22 by zakaria          ###   ########.fr       */
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
T min(T a, T b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif