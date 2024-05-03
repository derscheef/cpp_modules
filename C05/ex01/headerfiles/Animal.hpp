/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 12:09:43 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
protected:
    std::string type;
    std::string sound;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &src);
    virtual ~Animal();
    Animal &operator=(const Animal &src);
    void setType(std::string type);
    const std::string getType(void) const;
    virtual void  makeSound(void) const;
};

#endif