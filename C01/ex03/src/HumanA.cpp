/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:07:20 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 08:01:50 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << "HumanA " << name << " created with ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}
