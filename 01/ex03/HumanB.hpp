/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:13:38 by lhojoon           #+#    #+#             */
/*   Updated: 2024/03/20 15:03:16 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string);
    std::string getName();
    void setName(std::string);
    Weapon* getWeapon();
    void setWeapon(Weapon&);
    void attack();
private:
    std::string name;
    Weapon *weapon;
};