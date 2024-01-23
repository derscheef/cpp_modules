/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 14:42:33 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main(int argc, char **argv)
{
    char c;
    std::ifstream infile;
    std::string str;

    if (argc != 4)
    {
        std::cout << "usage: replace <file> 'old_word' 'new_word'" << std::endl;
        return (1);
    }
    infile.open(argv[1]);
    if (infile.fail())
    {
        std::cout << "Error: " << argv[1] << ":"
                  << " no such file or directory" << std::endl;
        return (1);
    }
    while (!infile.eof() && infile >> std::noskipws >> c)
        str += c;
    infile.close();
    return (replace(argv, str));
}
