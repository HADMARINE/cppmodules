/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:18:57 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 16:20:55 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &copy) {
    operator=(copy);
}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &copy) {
    if (this == &copy)
        return (*this);
    this->_type = copy._type;
    return (*this);
}

std::string const &AMateria::getType() const {
    return (_type);
}

void AMateria::use(ICharacter &target) {
    (void)target;
}