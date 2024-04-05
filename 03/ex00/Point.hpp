/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:40:12 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/27 12:46:30 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
public:
    Point();
    Point(const Fixed&, const Fixed&);
    ~Point();
    Point& operator=(const Point &point);
private:
    Fixed x;
    Fixed y;
};
