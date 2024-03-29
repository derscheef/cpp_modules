/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/03/29 10:37:28 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

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

    if (oldStr.empty() || newStr.empty())
    {
        std::cout << "Error: old_word and new_word must not be empty." << std::endl;
        return 1;
    }

    return ft_replace(filename, oldStr, newStr);
}
