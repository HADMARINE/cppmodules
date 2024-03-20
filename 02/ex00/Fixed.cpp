/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:29:45 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 16:49:33 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    DMSG("Default consturctor called");
    value = 0;
}

Fixed::~Fixed()
{
    DMSG("Destructor called");
}

Fixed::Fixed(const Fixed& fixed)
{
    DMSG("Copy constructor called");
    this->setRawBits(fixed.getRawBits());
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