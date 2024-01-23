/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:23:43 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 16:43:08 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Harl::Harl(void)
{
    funcs[0] = &Harl::debug;
    funcs[1] = &Harl::info;
    funcs[2] = &Harl::warning;
    funcs[3] = &Harl::error;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
    std::cout << MAGENTA << std::setw(10) << std::left << "[DEBUG]" << DEFAULT;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << GRAY << std::setw(10) << std::left << "[INFO]" << DEFAULT;
    std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger! If you did, I would not be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << YELLOW << std::setw(10) << std::left << "[WARNING]" << DEFAULT;
    std::cout << "I think I deserve to have some extra bacon for free. I have been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << std::setw(10) << std::left << "[ERROR]" << DEFAULT;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "Invalid complaint level: " << level << std::endl;
}
