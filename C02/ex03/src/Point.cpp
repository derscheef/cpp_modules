/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 04:06:22 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Fixed edgeFunction(const Point &a, const Point &b, const Point &p)
{
    return (p.x - a.x) * (b.y - a.y) - (p.y - a.y) * (b.x - a.x);
}

bool isPointInsideTriangle(const Point &p, const Point &a, const Point &b, const Point &c)
{
    bool baSide = edgeFunction(a, b, p) > 0;
    bool bcSide = edgeFunction(b, c, p) > 0;
    bool caSide = edgeFunction(c, a, p) > 0;

    return baSide == bcSide && bcSide == caSide;
}