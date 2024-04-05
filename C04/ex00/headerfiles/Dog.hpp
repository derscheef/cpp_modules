/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:52:34 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 19:47:36 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Head.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(const Dog &src);
    virtual ~Dog();
    Dog &operator=(const Dog &src);
    void makeSound(void) const;
};

#endif