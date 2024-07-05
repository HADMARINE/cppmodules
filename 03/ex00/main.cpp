/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:40:45 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 12:45:08 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap_trap("ClapTrap");
    clap_trap.setAttackDamage(10);
    // clap_trap.setHitPoints(10);
    clap_trap.setHitPoints(0);
    clap_trap.attack("target");
    return (0);
}