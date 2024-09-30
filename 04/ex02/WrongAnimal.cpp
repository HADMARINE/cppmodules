/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:08:57 by lhojoon           #+#    #+#             */
/*   Updated: 2024/09/30 15:09:46 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("null") {
    DMSG("WrongAnimal default constructor called");
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    DMSG("WrongAnimal default constructor called");   
    operator=(copy);
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    DMSG("WrongAnimal type constructor called");
}

WrongAnimal::~WrongAnimal() {
    DMSG("WrongAnimal destructor called");
}

void WrongAnimal::makeSound() const {
    std::cout << "generic animal sound..." << std::endl;
}
