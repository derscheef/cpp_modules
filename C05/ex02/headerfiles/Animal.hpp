/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 20:00:58 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
protected:
    std::string type;
    std::string sound;
    Animal(const Animal &src);
    Animal(std::string type);
    Animal();

public:
    virtual ~Animal();
    Animal &operator=(const Animal &src);
    void setType(std::string type);
    const std::string getType(void) const;
    virtual void makeSound(void) const = 0;
};

#endif