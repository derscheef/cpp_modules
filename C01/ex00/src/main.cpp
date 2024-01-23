/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 07:49:55 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Zombie *newZombie(std::string name);

int main(void)
{
    Zombie *z = newZombie("Baba");
    z->announce();
    randomChump("Buiii");
    delete z;
}
