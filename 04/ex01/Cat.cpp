/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:04:35 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 15:18:02 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {}

Cat::Cat(const Cat &copy) {
    operator=(copy);
}

Cat &Cat::operator=(const Cat &copy) {
    if (this == &copy)
        return (*this);
    type = copy.type;
    if (brain)
        delete brain;
    brain = new Brain(*copy.brain);
    return (*this);
}

Cat::~Cat() {
    if (brain)
        delete brain;
}