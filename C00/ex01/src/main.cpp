/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <ndivjak@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/03/17 23:25:33 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;
    printMenu();

    while (true)
    {
        std::cout << "Phonebook> ";
        std::getline(std::cin, command);
        if (std::cin.eof() || is_command(command, "EXIT"))
            exit(1);
        else if (command == "")
            continue;
        else if (command.compare("ADD"))
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
        else if (command.compare("SEARCH"))
            phonebook.search_contact();
        else if (command.compare("ALL"))
            phonebook.print_all();
        else if (command.compare("HELP"))
            printMenu();
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return (0);
}
