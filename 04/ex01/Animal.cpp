/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:00:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/07/10 12:44:58 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("null") {
    DMSG("Animal default constructor called");
}

Animal::Animal(const Animal &copy) {
    DMSG("Animal copy constructor called");
    operator=(copy);
}

Animal::Animal(std::string type) : type(type) {
    DMSG("Animal type constructor called");
}

Animal::~Animal() {
    DMSG("Animal destructor called");
}

Animal & Animal::operator=(const Animal &copy) {
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

void Animal::makeSound() const { 
    if (this->type == "Cat")
        std::cout << "Meow" << std::endl;
    else if (this->type == "Dog")
        std::cout << "Woof" << std::endl;
    else
        std::cout << "Beep" << std::endl;     
}