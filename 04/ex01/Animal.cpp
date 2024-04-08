/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:00:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 14:19:42 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("null") {}

Animal::Animal(const Animal &copy) {
    operator=(copy);
}

Animal::Animal(std::string type) : type(type) {}

Animal::~Animal() {}

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