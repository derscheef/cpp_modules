/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/04 22:32:42 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Head.hpp"

class Animal
{
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &src);
    ~Animal();
    Animal &operator=(const Animal &src);
    void setType(std::string type);
    std::string getType(void);
    void makeSound(void);

private:
    std::string type;
};

#endif
