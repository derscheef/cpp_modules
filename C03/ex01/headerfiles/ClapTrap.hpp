/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 15:36:29 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitpoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &src);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setName(std::string name);
    std::string getName() const;
    void setHitpoints(int hitpoints);
    int getHitpoints(void) const;
    void setEnergyPoints(int energyPoints);
    int getEnergyPoints(void) const;
    void setAttackDamage(int attackDamage);
    int getAttackDamage(void) const;
};

#endif