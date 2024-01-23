/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:11:20 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 08:02:49 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon(void);
    const std::string &getType(void);
    void setType(std::string type);
};

#endif
