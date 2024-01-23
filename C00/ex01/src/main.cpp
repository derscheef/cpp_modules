/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 12:05:33 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;

    system("clear");
    printMenu();

    while (true)
    {
        std::cout << "Phonebook> ";
        std::getline(std::cin, command);
        if (std::cin.eof() || is_command(command, "EXIT"))
            exit(0);
        else if (command == "")
            continue;
        else if (is_command(command, "ADD"))
        {
            if (!phonebook.is_full())
                phonebook.add_contact();
            else
            {
                std::cout << std::endl
                          << "Phonebook is full!" << std::endl;
                std::cout << "Removing oldest Contact:" << std::endl;
                phonebook.print_contact(0);
                std::cout << std::endl;
                phonebook.remove_oldest();
                phonebook.add_contact();
            }
        }
        else if (is_command(command, "SEARCH"))
            phonebook.search_contact();
        else if (is_command(command, "ALL"))
            phonebook.print_all();
        else if (is_command(command, "HELP"))
            printMenu();
        else if (is_command(command, "CLEAR"))
            system("clear");
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return (0);
}
