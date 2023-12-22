/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:53:14 by lhojoon           #+#    #+#             */
/*   Updated: 2023/12/22 17:21:50 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private: 
    std::string name;
public:
    Zombie();
    Zombie(const Zombie &zombie);
    ~Zombie();
    Zombie &operator=(const Zombie &zombie);
    void announce();
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}

#endif