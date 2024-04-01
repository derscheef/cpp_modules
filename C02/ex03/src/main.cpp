/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 04:09:59 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    Fixed px, py;
    Fixed ax, ay, bx, by, cx, cy;

    // Prompt and input for the point
    std::cout << "Enter the point coordinates (x y): ";
    std::cin >> px >> py;
    Point p(px, py);

    // Prompt and input for the triangle vertices
    std::cout << "Enter the first vertex of the triangle (x y): ";
    std::cin >> ax >> ay;
    Point a(ax, ay);

    std::cout << "Enter the second vertex of the triangle (x y): ";
    std::cin >> bx >> by;
    Point b(bx, by);

    std::cout << "Enter the third vertex of the triangle (x y): ";
    std::cin >> cx >> cy;
    Point c(cx, cy);

    if (isPointInsideTriangle(p, a, b, c))
    {
        std::cout << "Point is inside the triangle." << std::endl;
    }
    else
    {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}
