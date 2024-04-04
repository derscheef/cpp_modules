/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 13:32:13 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Head.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point() : _x(0), _y(0) {}
    Point(const float x, const float y) : _x(x), _y(y) {}
    Point(const Point &src) : _x(src._x), _y(src._y) {}
    ~Point() {}
    float getX() const { return _x.toFloat(); }
    float getY() const { return _y.toFloat(); }
};

#endif