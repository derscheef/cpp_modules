/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.at>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/02/02 12:33:23 by yscheef          ###   ########.fr       */
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
        if (std::cin.eof() || command.compare("EXIT"))
            exit(0);
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
        else if (command.compare("CLEAR"))
            system("clear");
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return (0);
}
