/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:50 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 04:05:35 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include <math.h>

Fixed edgeFunction(const Point &a, const Point &b, const Point &p);
bool isPointInsideTriangle(const Point &p, const Point &a, const Point &b, const Point &c);

#endif
