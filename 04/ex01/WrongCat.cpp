/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:08:26 by lhojoon           #+#    #+#             */
/*   Updated: 2024/07/10 12:49:41 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    DMSG("WrongCat default constructor called");
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    DMSG("WrongCat copy constructor called");
    operator=(copy);
}

WrongCat::~WrongCat() {
    DMSG("WrongCat destructor called");
}

void WrongCat::makeSound() const {
    std::cout << "fake meow" << std::endl;
}
