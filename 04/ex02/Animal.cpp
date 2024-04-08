/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:00:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 15:28:16 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(const Animal &copy) {
    operator=(copy);
}

Animal::~Animal() {}

Animal & Animal::operator=(const Animal &copy) {
    if (this == &copy)
        return (*this);
    return (*this);
}
