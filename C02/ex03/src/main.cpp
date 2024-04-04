/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 14:01:53 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    // 0 0 1 2 2 0 1 1 -> inside
    // 0 0 1 2 2 0 1 5 -> outside

    float ax, ay, bx, by, cx, cy, px, py;
    std::cout << "Enter triangle vertices A (x, y), B (x, y), C (x, y) and point P (x, y): ";
    std::cin >> ax >> ay >> bx >> by >> cx >> cy >> px >> py;

    Point a(ax, ay), b(bx, by), c(cx, cy), p(px, py);

    if (bsp(a, b, c, p))
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is outside the triangle." << std::endl;

    return 0;
}