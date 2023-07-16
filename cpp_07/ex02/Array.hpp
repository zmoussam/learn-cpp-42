/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:08:37 by zmoussam          #+#    #+#             */
/*   Updated: 2023/07/16 18:32:35 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY__
#define ARRAY__
#include <iostream>
template<typename T>
class Array
{
    private:
        T *arr;
        size_t arrLength;
    public:
        Array<T>()
        {
            this->arr = new T();
            this->arrLength = 0;
        }

        Array<T>(unsigned n)
        {
            this->arr = new T[n];
            this->arrLength = static_cast<size_t>(n);
        }

        Array<T>(const Array &copy)
        {
            *this = copy;
        }

        Array<T> &operator=(const Array &copy)
        {
            this->arr = new T[copy.size()];
            this->arrLength = copy.arrLength;
            for (size_t i = 0 ; i < copy.size() ; i++)
                this->arr[i] = copy.arr[i];
            return (*this);
        }
  
        T &operator[](unsigned int index)
        {
            if (index < 0 || index >= this->arrLength)
                throw std::exception();
            else 
                return this->arr[index];
        }

        ~Array<T>()
        {
            delete this->arr;
        }
        size_t size() const
        {
            return this->arrLength;
        }

};
        
#endif