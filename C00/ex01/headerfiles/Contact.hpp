/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:55 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 03:32:47 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "Head.hpp"

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    virtual ~Contact();

    // Setters
    void set_first_name(const std::string &fname);
    void set_last_name(const std::string &lname);
    void set_nickname(const std::string &nname);
    void set_phone_number(const std::string &phone);
    void set_darkest_secret(const std::string &secret);

    // Getters
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
};

#endif // CONTACT_HPP
