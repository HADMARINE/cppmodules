/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:06:17 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 15:18:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    brain = new Brain();
}

Dog::Dog(const Dog &copy) {
    operator=(copy);
}

Dog &Dog::operator=(const Dog &copy) {
    if (this == &copy)
        return (*this);
    type = copy.type;
    if (brain)
        delete brain;
    brain = new Brain(*copy.brain);
    return (*this);
}

Dog::~Dog() {
    if (brain)
        delete brain;
}
