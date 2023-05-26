/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoussam <zmoussam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 12:22:31 by zmoussam          #+#    #+#             */
/*   Updated: 2023/05/26 15:15:48 by zmoussam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT__
#define POINT__

#include "Fixed.hpp"

class Point 
{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(const Point &copy);
        Point(const float f1, const float f2);
        ~Point();
        Point &operator=(const Point &copy);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif