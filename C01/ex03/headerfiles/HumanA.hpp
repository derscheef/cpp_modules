/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:08:19 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 08:01:50 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Head.hpp"
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void attack(void);
    void setWeapon(Weapon weapon);
};
