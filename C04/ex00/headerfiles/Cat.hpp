/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:49:44 by yscheef           #+#    #+#             */
/*   Updated: 2024/04/05 11:53:10 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Head.hpp"

class Cat : public Animal
{

public:
    Cat();
    Cat(const Cat &src);
    virtual ~Cat();
    Cat &operator=(const Cat &src);
};

#endif