/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:51:46 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:18:32 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice & Ice::operator=(const Ice &cpy) {
    if (this == &cpy)
        return (*this);
    this->_type = cpy.getType();
    return (*this);
}

AMateria * Ice::clone() const {
    Ice * ice = new Ice();
    ice->_type = this->_type;
    return (ice);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}