/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:37:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 13:29:09 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default", 100, 50, 20), isGuardMode(false)
{
    DMSG("ScavTrap default constructor");
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name, 100, 50, 20), isGuardMode(false)
{
    DMSG("ScavTrap name constructor");
}

ScavTrap::ScavTrap(const ScavTrap& scav_trap)
{
    DMSG("ScavTrap copy constructor");
    operator=(scav_trap);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav_trap)
{
    DMSG("ScavTrap assignation operator");
    this->setName(scav_trap.getName());
    this->setHitPoints(scav_trap.getHitPoints());
    this->setEnergyPoints(scav_trap.getEnergyPoints());
    this->setAttackDamage(scav_trap.getAttackDamage());
    this->isGuardMode = scav_trap.getIsGuardMode();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    DMSG("ScavTrap destructor");
}

void ScavTrap::guardGate()
{
    if (this->isGuardMode == true)
    {
        std::cout << "ScavTrap " << this->getName() << " is already in Gate Mode" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->getName() << " is now in Gate Mode" << std::endl;
    this->isGuardMode = true;
}

void ScavTrap::setIsGuardMode(bool isGuardMode)
{
    this->isGuardMode = isGuardMode;
}

bool ScavTrap::getIsGuardMode() const
{
    return (this->isGuardMode);
}