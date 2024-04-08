/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:57:31 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:21:44 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure & Cure::operator=(const Cure &cpy)
{
    if (this == &cpy)
        return (*this);
    this->_type = cpy.getType();
    return (*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria * Cure::clone() const {
    Cure * cure = new Cure();
    cure->_type = this->_type;
    return (cure);
}