/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:40:00 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/27 12:46:33 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(const Fixed &x, const Fixed &y): x(x), y(y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{
}

Point& Point::operator=(const Point &point)
{
    x = point.x;
    y = point.y;
    return (*this);
}