/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:53:09 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 19:26:15 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie()
{
    std::cout << "Zombie <" << this->name << "> is destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}