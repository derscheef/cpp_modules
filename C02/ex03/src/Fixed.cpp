/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/01/22 04:06:22 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Head.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_value = src.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

Fixed::Fixed(const int value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_value = value << Fixed::_bits;
}

Fixed::Fixed(const float value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << Fixed::_bits));
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << Fixed::_bits);
}

int Fixed::toInt(void) const
{
    return this->_value >> Fixed::_bits;
}

// std::ostream &operator<<(std::ostream &o, Fixed const &src)
// {
//     o << src.toFloat();
//     return o;
// }

bool Fixed::operator>(const Fixed &src) const
{
    return this->_value > src.getRawBits();
}

bool Fixed::operator<(const Fixed &src) const
{
    return this->_value < src.getRawBits();
}

bool Fixed::operator>=(const Fixed &src) const
{
    return this->_value >= src.getRawBits();
}

bool Fixed::operator<=(const Fixed &src) const
{
    return this->_value <= src.getRawBits();
}

bool Fixed::operator==(const Fixed &src) const
{
    return this->_value == src.getRawBits();
}

bool Fixed::operator!=(const Fixed &src) const
{
    return this->_value != src.getRawBits();
}

Fixed Fixed::operator+(const Fixed &src) const
{
    return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(const Fixed &src) const
{
    return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(const Fixed &src) const
{
    return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed &src) const
{
    return Fixed(this->toFloat() / src.toFloat());
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}
