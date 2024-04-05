/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:53:25 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 14:23:00 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Dog::Dog() : Animal("Dog")
{
    this->sound = "Woof";
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    if (this->brain)
        delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        delete brain;
        brain = new Brain(*src.brain);
    }
    return *this;
}

Brain &Dog::getBrain() const
{
    return *brain;
}