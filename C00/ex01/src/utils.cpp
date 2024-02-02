/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.at>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 00:18:40 by yscheef           #+#    #+#             */
/*   Updated: 2024/02/02 12:06:41 by yscheef          ###   ########.fr       */
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
        else if (input.empty())
            std::cout << "Field cannot be empty" << std::endl;
        else if (input.find_first_not_of(valid_chars) != std::string::npos)
        {
            std::cout << "Input contains invalid characters." << std::endl;
            input.clear();
        }
        else
            break;
    }
    return input;
}

std::string to_lowercase(const std::string &str)
{
    std::string lower_case_str = str;
    for (size_t i = 0; i < lower_case_str.length(); ++i)
    {
        lower_case_str[i] = std::tolower(lower_case_str[i]);
    }
    return lower_case_str;
}

bool is_command(const std::string &command, const std::string &target)
{
    return to_lowercase(command) == to_lowercase(target);
}

std::string format(const std::string &field)
{
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}
