/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:06:17 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:10:30 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() {
    DMSG("Dog default constructor called");
    brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    DMSG("Dog copy constructor called");
    operator=(copy);
}

Dog &Dog::operator=(const Dog &copy) {
    if (this == &copy)
        return (*this);
    brain = new Brain(*copy.brain);
    return (*this);
}

Dog::~Dog() {
    DMSG("Dog destructor called");
    if (brain)
        delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}