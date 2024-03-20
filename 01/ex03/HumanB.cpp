/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:13:47 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 15:03:35 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name)
{
    this->weapon = NULL;
}

std::string HumanB::getName()
{
    return (this->name);
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

Weapon* HumanB::getWeapon()
{
    return (this->weapon);
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!this->weapon)
    {
        std::cout << "You cannot attack since you don't posseses a weapon" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}