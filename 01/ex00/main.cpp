/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:53:06 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 19:27:18 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie *zombie = newZombie("Zombie1");
    zombie->announce();
    delete zombie;
    randomChump("Zombie2");
    return (0);
}

