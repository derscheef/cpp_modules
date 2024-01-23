/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 08:01:50 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    void announce(void);
    void setName(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
