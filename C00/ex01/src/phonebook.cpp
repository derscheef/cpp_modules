/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:33:33 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 12:05:22 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Phonebook::Phonebook()
{
    contact_count = 0;
}

Phonebook::~Phonebook()
{
}

bool Phonebook::is_full()
{
    return contact_count >= 8;
}

void Phonebook::print_all()
{
    for (int i = 0; i < contact_count; i++)
    {
        std::cout << std::endl;
        std::cout << "Contact " << i + 1 << "/" << contact_count << std::endl;
        std::cout << "Firstname: " << contacts[i].get_first_name() << std::endl;
        std::cout << "Lastname: " << contacts[i].get_last_name() << std::endl;
        std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
        std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
        std::cout << std::endl;
    }
}
void Phonebook::print_contact(int i)
{
    std::cout << "Contact Info:" << std::endl;
    std::cout << "Firstname: " << contacts[i].get_first_name() << std::endl;
    std::cout << "Lastname: " << contacts[i].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
    std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
}

void Phonebook::add_contact()
{
    std::string input;

    contacts[contact_count].set_first_name((get_input("name")));
    contacts[contact_count].set_last_name((get_input("last name")));
    contacts[contact_count].set_nickname((get_input("nickname")));
    contacts[contact_count].set_phone_number((get_input("phone number")));
    contacts[contact_count].set_darkest_secret((get_input("darkest secret")));
    contact_count++;
}

void Phonebook::search_contact()
{
    if (contact_count == 0)
    {
        std::cout << "Contact list is empty" << std::endl;
        return;
    }
    system("clear");
    printBoxStart();
    std::cout << "\n|  Index|First Name| Last Name|  Nickname   |" << std::endl;
    for (int i = 0; i < contact_count; i += 1)
    {
        std::cout << "|" << std::right << std::setw(7) << i + 1 << "|";
        std::cout << std::right << std::setw(10) << format(contacts[i].get_first_name()) << "|";
        std::cout << std::right << std::setw(10) << format(contacts[i].get_last_name()) << "|";
        std::cout << std::right << std::setw(10) << format(contacts[i].get_nickname()) << std::setw(4) << "|";
        std::cout << std::endl;
    }
    printBoxEnd();
    std::string input;
    while (true)
    {
        input = get_input("index");
        if (input != "0" && input.length() == 1 && isdigit(input[0]) && input[0] - '0' < contact_count + 1)
            break;
    }
    print_contact(std::stoi(input) - 1);
}

void Phonebook::remove_oldest()
{
    if (contact_count > 0)
    {
        for (int i = 0; i < contact_count - 1; i++)
            contacts[i] = contacts[i + 1];
        contact_count--;
    }
}
