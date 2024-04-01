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

#ifndef FIXED_HPP
#define FIXED_HPP

#include "Head.hpp"

class Fixed
{
private:
    int _value;
    static const int _bits = 8;

public:
    Fixed();
    Fixed(const Fixed &src);
    Fixed &operator=(const Fixed &src);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed(const float value);
    Fixed(const int value);
    int toInt(void) const;
    float toFloat(void) const;
    // friend std::ostream &operator<<(std::ostream &o, Fixed const &src);
    bool operator>(const Fixed &src) const;
    bool operator<(const Fixed &src) const;
    bool operator>=(const Fixed &src) const;
    bool operator<=(const Fixed &src) const;
    bool operator==(const Fixed &src) const;
    bool operator!=(const Fixed &src) const;
    Fixed operator+(const Fixed &src) const;
    Fixed operator-(const Fixed &src) const;
    Fixed operator*(const Fixed &src) const;
    Fixed operator/(const Fixed &src) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    friend std::ostream &operator<<(std::ostream &out, const Fixed &f)
    {
        out << f._value;
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Fixed &f)
    {
        in >> f._value;
        return in;
    }
};

#endif