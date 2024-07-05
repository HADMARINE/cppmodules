/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:25:04 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 13:00:34 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_trap"), name("Default")
{
    DMSG("DiamondTrap default constructor");
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const std::string & name) : ClapTrap(name + "_clap_trap")
{
    DMSG("DiamondTrap name constructor");
    this->name = name;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
}


DiamondTrap::DiamondTrap(const DiamondTrap & diamond_trap) : ClapTrap(diamond_trap), ScavTrap(diamond_trap), FragTrap(diamond_trap)
{
    DMSG("DiamondTrap copy constructor");
    operator=(diamond_trap);
}

DiamondTrap::~DiamondTrap()
{
    DMSG("DiamondTrap destructor");
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->getName() << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::attack(const std::string & target)
{
    ScavTrap::attack(target);
}