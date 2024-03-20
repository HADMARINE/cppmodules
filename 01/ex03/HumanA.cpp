/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:13:41 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 14:54:12 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(weapon)
{
}

std::string HumanA::getName()
{
    return (this->name);
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

Weapon& HumanA::getWeapon()
{
    return (this->weapon);
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
