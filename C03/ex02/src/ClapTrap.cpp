/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:10:28 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 15:49:50 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

ClapTrap::ClapTrap() : _name("Basic"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "A new Claptrap appears" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    this->_name = name;
    std::cout << "A new Claptrap named " << name << " appears" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Bye bye " << _name << "!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "ClapTrap " << _name << " copy constructor called!" << std::endl;
}
void ClapTrap::attack(std::string const &target)
{
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy and cannot attack!" << std::endl;
        return;
    }
    else if (_attackDamage == 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " but does no damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
    }
    _energyPoints -= 1;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    _name = src._name;
    _hitpoints = src._hitpoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    std::cout << "ClapTrap " << _name << " assignation operator called!" << std::endl;
    return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }
    else if (amount >= _hitpoints)
    {
        _hitpoints = 0;
        std::cout << "ClapTrap " << _name << " is now dead!" << std::endl;
    }
    else
    {
        _hitpoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!"
                  << " Remaining hitpoints: " << _hitpoints << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}

void ClapTrap::setHitpoints(int hitpoints)
{
    _hitpoints = hitpoints;
}

int ClapTrap::getHitpoints(void) const
{
    return (_hitpoints);
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    _energyPoints = energyPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return (_energyPoints);
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    _attackDamage = attackDamage;
}

int ClapTrap::getAttackDamage(void) const
{
    return (_attackDamage);
}
