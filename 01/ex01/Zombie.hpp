/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:53:14 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/19 19:30:16 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
public:
    ~Zombie();
    void announce();
    void setName(std::string name);
private: 
    std::string name;
};

#endif