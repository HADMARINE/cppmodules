/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:06:17 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:06:53 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    DMSG("Dog default constructor called");
    brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy.type) {
    DMSG("Dog copy constructor called");
    brain = NULL;
    *this = copy;
    return;
}

Dog &Dog::operator=(const Dog &copy) {
    if (this == &copy)
        return (*this);
    type = copy.type;
    brain = new Brain(*copy.brain);
    return (*this);
}

Dog::~Dog() {
    DMSG("Dog destructor called");
    if (brain)
        delete brain;
}
