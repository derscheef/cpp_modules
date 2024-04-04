/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <ndivjak@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 18:02:16 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

// TODO: Remove ex04 from repo
// TODO: Remove testfile and testfile.replace from repo

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: replace <file> 'old_word' 'new_word'" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string oldStr = argv[2];
    std::string newStr = argv[3];

    // TODO: ./ex04 testfile test "" should work.
    // TODO: ./ex04 testfile \n "aba" this should maybe work
    if (oldStr.empty() || newStr.empty())
    {
        std::cout << "Error: old_word and new_word must not be empty." << std::endl;
        return 1;
    }

    return ft_replace(filename, oldStr, newStr);
}
