/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:10:28 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 17:31:04 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    setHitpoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() << " is born!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHitpoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " is dead!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "FragTrap " << getName() << " copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    setName(copy.getName());
    setHitpoints(copy.getHitpoints());
    setEnergyPoints(copy.getEnergyPoints());
    setAttackDamage(copy.getAttackDamage());
    std::cout << "FragTrap " << getName() << " assignation operator called!" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a high five!" << std::endl;
}