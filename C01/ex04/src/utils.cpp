/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:16:42 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 22:14:32 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int ft_replace(const std::string &filename, const std::string &oldStr, const std::string &newStr)
{
    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cout << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(infile)),
                        std::istreambuf_iterator<char>());
    infile.close();

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cout << "Error creating output file." << std::endl;
        return 1;
    }

    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;

    while ((pos = content.find(oldStr, lastPos)) != std::string::npos)
    {
        result += content.substr(lastPos, pos - lastPos);
        result += newStr;
        lastPos = pos + oldStr.length();
    }

    result += content.substr(lastPos);

    outfile << result;
    outfile.close();

    return 0;
}
