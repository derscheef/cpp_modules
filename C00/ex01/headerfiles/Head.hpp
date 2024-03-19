/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Head.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.at>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:50 by yscheef           #+#    #+#             */
/*   Updated: 2024/02/02 12:33:59 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Contact.hpp"
#include "Phonebook.hpp"

// utils

void printMenu(void);
void printBoxStart(void);
void printBoxEnd(void);
std::string get_input(std::string prompt);
std::string format(const std::string &field);

#endif
