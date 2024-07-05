/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:36:41 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 12:51:13 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav_trap("ScavTrap 1");
    scav_trap.guardGate();
    scav_trap.beRepaired(10);
    scav_trap.attack("Hello");
    return (0);
}