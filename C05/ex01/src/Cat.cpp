/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:51:28 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 14:17:30 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Cat::Cat() : Animal("Cat")
{
    this->sound = "Meow";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
    if (this->brain)
        delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        delete brain;
        brain = new Brain(*src.brain);
    }
    return *this;
}

Brain &Cat::getBrain() const
{
    return *brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat makes meooooowwwwwwwww" << std::endl;
}