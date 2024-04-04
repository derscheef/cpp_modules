/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <ndivjak@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 17:55:17 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: Remove ex02 from repo

#include "../headerfiles/Head.hpp"

int main(void)
{
    std::string string;
    std::string *stringPTR;

    string = "HI THIS IS BRAIN";
    stringPTR = &string;
    std::string &stringREF = string;
    std::cout << "string address: " << &string << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;
    std::cout << "stringPTR string: " << *stringPTR << std::endl;
    std::cout << "stringREF string: " << stringREF << std::endl;
}
