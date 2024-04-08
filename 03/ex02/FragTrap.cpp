/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:05:16 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 12:32:31 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    DMSG("FragTrap default constructor");
    high_fives = 0;
}

FragTrap::FragTrap(const std::string & name) : ClapTrap(name)
{
    DMSG("FragTrap name constructor");
    high_fives = 0;
}

FragTrap::FragTrap(const FragTrap & frag_trap)
{
    DMSG("FragTrap copy constructor");
    operator=(frag_trap);
}

FragTrap & FragTrap::operator=(const FragTrap & frag_trap)
{
    DMSG("FragTrap assignation operator");
    if (this != &frag_trap)
    {
        this->setHitPoints(frag_trap.getHitPoints());
        this->setEnergyPoints (frag_trap.getEnergyPoints());
        this->setAttackDamage(frag_trap.getAttackDamage());
        this->setHighFives(frag_trap.getHighFives());
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    DMSG("FragTrap destructor");
}

void FragTrap::setHighFives(unsigned int high_fives)
{
    this->high_fives = high_fives;
}

unsigned int FragTrap::getHighFives(void) const
{
    return (this->high_fives);
}

void FragTrap::highFiveGuys(void)
{
    this->setHighFives(this->getHighFives() + 1);
    std::cout << "High five guys ! High five count : " << this->getHighFives() << std::endl;
}