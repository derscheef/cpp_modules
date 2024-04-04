/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:10:28 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 15:42:04 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    setHitpoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " is born!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    setHitpoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " is born!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " is dead!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "ScavTrap " << getName() << " copy constructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    setName(copy.getName());
    setHitpoints(copy.getHitpoints());
    setEnergyPoints(copy.getEnergyPoints());
    setAttackDamage(copy.getAttackDamage());
    std::cout << "ScavTrap " << getName() << " assignation operator called!" << std::endl;
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if (getHitpoints() == 0)
    {
        std::cout << "ScavTrap " << getName() << " is dead and cannot attack!" << std::endl;
        return;
    }

    if (getEnergyPoints() == 0)
    {
        std::cout << "ScavTrap " << getName() << " is out of energy and cannot attack!" << std::endl;
        return;
    }

    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "
              << getAttackDamage() << " points of damage!" << std::endl;

    setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << getName() << " has entered in Gate keeper mode!" << std::endl;
}
