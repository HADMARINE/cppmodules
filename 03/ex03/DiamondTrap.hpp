/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:25:18 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 13:02:03 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    DiamondTrap(const std::string & name);
    DiamondTrap(const DiamondTrap & diamond_trap);
    ~DiamondTrap();

    void attack(const std::string & target);
    void whoAmI(void);
protected:
    std::string name;
};