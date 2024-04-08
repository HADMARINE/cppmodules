/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:08:57 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 14:20:48 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("null") {}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    operator=(copy);
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {}

WrongAnimal::~WrongAnimal() {}

void WrongAnimal::makeSound() const {
    std::cout << "PETER!" << std::endl;
}
