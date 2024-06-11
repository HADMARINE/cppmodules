/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:37:20 by lhojoon           #+#    #+#             */
/*   Updated: 2024/06/11 12:52:18 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string & name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& scav_trap);
    ScavTrap& operator=(const ScavTrap& scav_trap);
    
    void attack(const std::string & target);
    void guardGate();
    void setIsGuardMode(bool isGuardMode);
    bool getIsGuardMode() const;
private:
    bool isGuardMode;
};