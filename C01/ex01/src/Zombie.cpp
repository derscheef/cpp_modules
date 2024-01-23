/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:33:33 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 08:01:50 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::Zombie(void)
{
    this->name = "(null)";
    std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie object " << this->name << " destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
    std::cout << "Zombie " << this->name << " named" << std::endl;
}
