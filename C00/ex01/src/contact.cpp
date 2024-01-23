/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:55 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 03:37:25 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_first_name(const std::string &fname)
{
    first_name = fname;
}

void Contact::set_last_name(const std::string &lname)
{
    last_name = lname;
}

void Contact::set_nickname(const std::string &nname)
{
    nickname = nname;
}

void Contact::set_phone_number(const std::string &phone)
{
    phone_number = phone;
}

void Contact::set_darkest_secret(const std::string &secret)
{
    darkest_secret = secret;
}

std::string Contact::get_first_name() const
{
    return first_name;
}

std::string Contact::get_last_name() const
{
    return last_name;
}

std::string Contact::get_nickname() const
{
    return nickname;
}

std::string Contact::get_phone_number() const
{
    return phone_number;
}

std::string Contact::get_darkest_secret() const
{
    return darkest_secret;
}
