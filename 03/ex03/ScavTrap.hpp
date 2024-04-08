/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:37:20 by lhojoon           #+#    #+#             */
/*   Updated: 2024/04/08 13:27:09 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string & name);
    ScavTrap(const ScavTrap& scav_trap);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap& scav_trap);
    
    void guardGate();
    void setIsGuardMode(bool isGuardMode);
    bool getIsGuardMode() const;
protected:
    bool isGuardMode;
};