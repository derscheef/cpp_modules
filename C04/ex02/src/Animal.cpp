/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:26:52 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 20:02:28 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal constructor of type " << type << " called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    this->type = src.type;
    return *this;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

const std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    if (this->sound.empty())
        std::cout << "Animal make sound" << std::endl;
    else
        std::cout << "Animal make " << this->sound << std::endl;
}
