/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:47:00 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/05 21:35:30 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define DEBUG

#ifdef DEBUG

#define DMSG(x) std::cout << x << std::endl

#else

#define DMSG(x)

#endif

#include <string>
#include <iostream>

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const std::string & name);
    ClapTrap(const ClapTrap& clap_trap);
    ClapTrap& operator=(const ClapTrap& clap_trap);
    ~ClapTrap();

    void setName(const std::string & name);
    void setHitPoints(int hit_points);
    void setEnergyPoints(int energy_points);
    void setAttackDamage(int attack_damage);

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
private:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
};
