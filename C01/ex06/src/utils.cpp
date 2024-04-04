/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:25:33 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 22:19:30 by yscheef          ###   ########.fr       */
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
    int level = harl_translate(input);

    if (level == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }

    switch (level)
    {
    case 0:
        h.complain("DEBUG");
        // fallthrough
    case 1:
        h.complain("INFO");
        // fallthrough
    case 2:
        h.complain("WARNING");
        // fallthrough
    case 3:
        h.complain("ERROR");
        break;
    default:
        break;
    }
}
