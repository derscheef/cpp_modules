/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.at>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:07:17 by yscheef           #+#    #+#             */
/*   Updated: 2024/02/02 12:09:27 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
            for (int j = 0; av[i][j]; j++)
                std::cout << (char)std::toupper(av[i][j]);
        std::cout << std::endl;
    }
}
