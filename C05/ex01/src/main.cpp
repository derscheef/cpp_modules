/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 14:01:07 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    Animal *arr[20];
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }

    for (int i = 0; i < 20; i++)
    {
        arr[i]->makeSound();
    }

    for (int i = 0; i < 20; i++)
    {
        delete arr[i];
    }

    Dog *og = new Dog();

    og->getBrain().setIdea(0, "Idea 1");

    Dog *copy = new Dog(*og);

    Dog *copy2 = new Dog();
    *copy2 = *og;

    std::cout << copy->getBrain().getIdea(0) << std::endl;
    std::cout << copy2->getBrain().getIdea(0) << std::endl;

    og->getBrain().setIdea(0, "Idea 2");

    std::cout << copy->getBrain().getIdea(0) << std::endl;
    std::cout << copy2->getBrain().getIdea(0) << std::endl;

    delete og;
    delete copy;
    delete copy2;

    Cat *og_c = new Cat();

    og_c->getBrain().setIdea(0, "Idea 1");

    Cat *copy_c = new Cat(*og_c);

    Cat *copy2_c = new Cat();
    *copy2_c = *og_c;

    std::cout << copy_c->getBrain().getIdea(0) << std::endl;
    std::cout << copy2_c->getBrain().getIdea(0) << std::endl;

    og_c->getBrain().setIdea(0, "Idea 2");

    std::cout << copy_c->getBrain().getIdea(0) << std::endl;
    std::cout << copy2_c->getBrain().getIdea(0) << std::endl;

    delete og_c;
    delete copy_c;
    delete copy2_c;

    return 0;
}