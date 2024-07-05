/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:37:32 by lhojoon           #+#    #+#             */
/*   Updated: 2024/07/05 15:44:37 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    DMSG("ScavTrap Default constructor called");
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name)
{
    DMSG("ScavTrap Name constructor called");
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
    return (*this);
}

void ScavTrap::attack(const std::string & target)
{
    DMSG("ScavTrap destructor");
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate Mode" << std::endl;
}
