/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:13:45 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 14:54:00 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string, Weapon&);
    std::string getName();
    void setName(std::string);
    Weapon& getWeapon();
    void setWeapon(Weapon&);
    void attack();
private:
    std::string name;
    Weapon &weapon;
};