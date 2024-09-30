/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:04:35 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:07:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    DMSG("Cat default constructor called");
    brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy.type) {
    DMSG("Cat copy constructor called");
    brain = NULL;
    *this = copy;
    return;
}

Cat &Cat::operator=(const Cat &copy) {
    if (this == &copy)
        return (*this);
    type = copy.type;
    brain = new Brain(*copy.brain);
    return (*this);
}

Cat::~Cat() {
    DMSG("Cat destructor called");
    if (brain)
        delete brain;
}