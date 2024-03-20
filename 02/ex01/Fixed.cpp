/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:29:45 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 19:13:31 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0)
{
    DMSG("Default consturctor called");
}

Fixed::Fixed(const int value) : value(value << bits)
{
    DMSG("Int constructor called");
}

Fixed::Fixed(const float value) : value(roundf(value * (1 << bits)))
{
    DMSG("Float constructor called");
}

int Fixed::toInt() const
{
    return (value >> bits);
}

float Fixed::toFloat() const
{
    return (static_cast<float>(this->getRawBits()) / (1 << bits));
}

Fixed::Fixed(const Fixed& fixed)
{
    DMSG("Copy constructor called");
    this->setRawBits(fixed.getRawBits());
}

Fixed::~Fixed()
{
    DMSG("Destructor called");
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    DMSG("Copy assignment operator called");
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
}

int Fixed::getRawBits() const
{
    DMSG("getRawBits member function called");
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    DMSG("setRawBits member function called");
    value = raw;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return (os);
}