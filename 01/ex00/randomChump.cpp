/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:52:59 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 19:26:14 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump(std::string name)
{
    Zombie *zombie = newZombie(name);
    zombie->setName(name);
    zombie->announce();
    delete zombie;
}