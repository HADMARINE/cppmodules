/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:06:17 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 16:00:54 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() {
    brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    operator=(copy);
}

Dog &Dog::operator=(const Dog &copy) {
    if (this == &copy)
        return (*this);
    if (brain)
        delete brain;
    brain = new Brain(*copy.brain);
    return (*this);
}

Dog::~Dog() {
    if (brain)
        delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}