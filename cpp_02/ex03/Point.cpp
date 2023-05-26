/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:52:58 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/26 15:18:25 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(const Point &copy)
{
    *this = copy;
}

Point::Point(const float f1, const float f2)
{
     x = f1;
     y = f2;
}

Point::~Point()
{
    
}

Point &Point::operator=(const Point &copy)
{
    this->x = copy.x;
    this->y = copy.y;
    return *this;
}