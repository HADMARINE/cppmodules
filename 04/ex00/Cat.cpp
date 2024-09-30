/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:04:35 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:08:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    DMSG("Cat default constructor called");
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    DMSG("Cat copy constructor called");
    operator=(copy);
}

Cat &Cat::operator=(const Cat &copy) {
    if (this == &copy)
        return (*this);
    type = copy.type;
    return (*this);
}

Cat::~Cat() {
    DMSG("Cat destructor called");
}