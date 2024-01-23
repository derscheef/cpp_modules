/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:25:33 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 16:33:37 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int harl_translate(std::string input)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (levels[i] == input)
            return (i);
    return (-1);
}

void check_level(std::string input, Harl &h)
{
    switch (harl_translate(input))
    {
    case 0:
        h.complain("DEBUG");
    case 1:
        h.complain("INFO");
    case 2:
        h.complain("WARNING");
    case 3:
        h.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
