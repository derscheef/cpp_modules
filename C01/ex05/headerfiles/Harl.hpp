/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 07:23:55 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/23 15:08:36 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

#define HARL_HPP

#define DEFAULT "\001\033[0;39m\002"
#define RED "\001\033[1;91m\002"
#define YELLOW "\001\033[1;93m\002"
#define MAGENTA "\001\033[1;95m\002"
#define GRAY "\001\033[1;90m\002"

#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);

    typedef void (Harl::*ComplainFunc)();
    ComplainFunc funcs[4];
    std::string levels[4];
};

#endif
