/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/03/27 10:35:03 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;
    command = "";

    printMenu();

    while (true)
    {
        std::cout << "Phonebook> ";
        std::getline(std::cin, command);
        if (std::cin.eof() || command.compare("EXIT") == 0)
            return 0;
        else if (command == "")
            continue;
        else if (command.compare("ADD") == 0)
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
        else if (command.compare("SEARCH") == 0)
            phonebook.search_contact();
        else if (command.compare("ALL") == 0)
            phonebook.print_all();
        else if (command.compare("HELP") == 0)
            printMenu();
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}
