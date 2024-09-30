/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:00:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/07/10 14:07:15 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    DMSG("Animal default constructor called");
}

Animal::Animal(const Animal &copy) {
    DMSG("Animal copy constructor called");
    operator=(copy);
}

Animal::~Animal() {
    DMSG("Animal destructor called");
}

Animal & Animal::operator=(const Animal &copy) {
    if (this == &copy)
        return (*this);
    return (*this);
}
