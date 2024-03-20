/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:53:06 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 19:36:35 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int count = 5;
    Zombie *zombies = zombieHorde(count, "Zombie");
    
    for (int i = 0; i < count; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    
    return (0);
}

