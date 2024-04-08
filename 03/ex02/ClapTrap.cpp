/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:46:51 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/05 21:46:44 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_points(10), energy_points(10), attack_damage(0)
{
    DMSG("ClapTrap Default constructor called");
}

ClapTrap::ClapTrap(const std::string & name)
{
    DMSG("ClapTrap Name constructor called");
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& clap_trap)
{
    DMSG("ClapTrap Copy constructor called");
    operator=(clap_trap);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap_trap)
{
    DMSG("ClapTrap Assignation operator called");
    if (this != &clap_trap)
    {
        this->hit_points = clap_trap.hit_points;
        this->energy_points = clap_trap.energy_points;
        this->attack_damage = clap_trap.attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    DMSG("ClapTrap Destructor called");
}

void ClapTrap::setName(const std::string & name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int hit_points)
{
    this->hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points)
{
    this->energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
    this->attack_damage = attack_damage;
}

std::string ClapTrap::getName() const
{
    return (this->name);
}

int ClapTrap::getHitPoints() const
{
    return (this->hit_points);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energy_points);
}

int ClapTrap::getAttackDamage() const
{
    return (this->attack_damage);
}

void ClapTrap::attack(const std::string & target)
{
    if (this->hit_points <= 0 || this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hit_points += amount;
}

