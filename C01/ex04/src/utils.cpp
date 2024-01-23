/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:16:42 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 07:16:53 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int replace(char **argv, std::string str)
{
    std::ofstream outfile;
    int pos;

    outfile.open((std::string(argv[1]) + ".replace").c_str());
    if (outfile.fail())
        return (1);
    for (int i = 0; i < (int)str.size(); i++)
    {
        pos = str.find(argv[2], i);
        if (pos != -1 && pos == i)
        {
            outfile << argv[3];
            i += std::string(argv[2]).size() - 1;
        }
        else
            outfile << str[i];
    }
    outfile.close();
    return (0);
}
