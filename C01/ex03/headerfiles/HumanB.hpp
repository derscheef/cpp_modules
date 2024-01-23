/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:09:41 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 08:01:50 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Head.hpp"
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string name);
    ~HumanB(void);
    void attack(void);
    void setWeapon(Weapon &weapon);
};
