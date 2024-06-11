/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:36:41 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 13:00:58 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap trap("Diamond_Trap_1");
    trap.whoAmI();
    trap.attack("Enemy 1");
    // trap.takeDamage(10);
    // trap.beRepaired(10);
    // trap.guardGate();
    trap.highFiveGuys();
    return (0);
}