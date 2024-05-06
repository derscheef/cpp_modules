/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:57:00 by yscheef           #+#    #+#             */
/*   Updated: 2024/05/06 15:41:08 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

int main()
{
    Bureaucrat bureaucrat;

    bureaucrat.setName("John");
    bureaucrat.setGrade(42);

    std::cout << "Name: " << bureaucrat.getName() << std::endl;
    std::cout << "Grade: " << bureaucrat.getGrade() << std::endl;

    return 0;
}