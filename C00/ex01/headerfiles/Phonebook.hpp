/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 11:07:53 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Head.hpp"

class Contact;

class Phonebook
{
private:
    Contact contacts[8];
    int contact_count;

public:
    Phonebook();
    virtual ~Phonebook();

    void add_contact();
    void search_contact();
    bool is_full();
    void print_all();
    void print_contact(int index);
    void remove_oldest();
};

#endif
