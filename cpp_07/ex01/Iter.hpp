/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:05:10 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/15 18:05:31 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER__
#define ITER__
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*func)(int , T))
{
    if (arr)
    {
        for(size_t i = 0; i < len; i++){
                func(i, arr[i]);
            }
    }
}
#endif