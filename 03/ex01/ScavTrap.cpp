/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:37:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/05 21:55:51 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap() : ClapTrap()
{
    DMSG("ScavTrap Default constructor called");
    this->isGuardMode = false;
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name)
{
    DMSG("ScavTrap Name constructor called");
    this->isGuardMode = false;
}

ScavTrap::~ScavTrap()
{
    DMSG("ScavTrap Destructor called");
}

ScavTrap::ScavTrap(const ScavTrap& scav_trap) : ClapTrap(scav_trap)
{
    DMSG("ScavTrap Copy constructor called");
    operator=(scav_trap);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav_trap)
{
    DMSG("ScavTrap Assignation operator called");
    this->setName(scav_trap.getName());
    this->setHitPoints(scav_trap.getHitPoints());
    this->setEnergyPoints(scav_trap.getEnergyPoints());
    this->setAttackDamage(scav_trap.getAttackDamage());
    this->isGuardMode = scav_trap.getIsGuardMode();
    return (*this);
}
