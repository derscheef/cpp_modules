/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <ndivjak@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:25:33 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 18:13:48 by ndivjak          ###   ########.fr       */
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

// TODO: No if statements
void check_level(std::string input, Harl &h)
{
    int level = harl_translate(input);

    if (level == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
    if (level <= 0)
    {
        h.complain("DEBUG");
    }
    if (level <= 1)
    {
        h.complain("INFO");
    }
    if (level <= 2)
    {
        h.complain("WARNING");
    }
    if (level <= 3)
    {
        h.complain("ERROR");
    }
}
