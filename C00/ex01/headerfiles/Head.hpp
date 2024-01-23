/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:50 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 12:59:14 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <iomanip>
#include <locale>
#include <codecvt>
#include <string>

#include "Contact.hpp"
#include "Phonebook.hpp"

// utils

void printMenu(void);
void printBoxStart(void);
void printBoxEnd(void);
std::string get_input(std::string prompt);
bool is_command(std::string input, std::string command);
std::string format(const std::string &field);

#endif
