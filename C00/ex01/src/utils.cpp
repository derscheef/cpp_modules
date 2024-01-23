/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 00:18:40 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 13:05:07 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

void printMenu(void)
{
    std::cout << "*-------------------------------------------*\n"
                 "|                                           |\n"
                 "|                 Phonebook                 |\n"
                 "|                                           |\n"
                 "|      ADD     -   Add a new contact        |\n"
                 "|      SEARCH  -   Display a contact        |\n"
                 "|      EXIT    -   Exit phoneBook           |\n"
                 "|      ALL     -   Print all contacts       |\n"
                 "|      HELP    -   Display this menu        |\n"
                 "|                                           |\n"
                 "*-------------------------------------------*"
              << std::endl;
}

void printBoxStart(void)
{
    std::cout << "*-------------------------------------------*\n"
                 "|                                           |";
}

void printBoxEnd(void)
{
    std::cout << "|                                           |\n"
                 "*-------------------------------------------*"
              << std::endl;
}

std::string get_input(std::string prompt)
{
    std::string input;
    std::string valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+ ";

    while (true)
    {
        std::cin.clear();
        std::cout << "Enter " << prompt << ":" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input.find_first_not_of(valid_chars) != std::string::npos)
        {
            std::cout << "Input contains invalid characters." << std::endl;
            input.clear();
        }
        else
        {
            break;
        }
    }
    return input;
}

bool is_command(std::string input, std::string command)
{
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    return (command == input);
}

std::string format(const std::string &field)
{
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}
