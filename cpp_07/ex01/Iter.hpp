/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakaria <zakaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:58:31 by zakaria           #+#    #+#             */
/*   Updated: 2023/07/13 21:23:10 by zakaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER__
#define ITER__
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, (void *)func())
{
    for(int i = 0; i < len; i++){
        func(arr[i])
    }
}
#endif